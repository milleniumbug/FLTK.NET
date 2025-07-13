using System.Drawing;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using FLTK.NET;
using Interop.Runtime;

public class Program
{
    private static async void Callback(object? sender, CallbackReason reason)
    {
        Console.WriteLine(reason);
        var b = (Button)sender!;
        b.Label = "Works!";
        await Task.Delay(1000);
        b.Label = "5";
        Fl.Awake();
        await Task.Delay(1000);
        b.Label = "4";
        Fl.Awake();
        await Task.Delay(1000);
        b.Label = "3";
        Fl.Awake();
        await Task.Delay(1000);
        b.Label = "2";
        Fl.Awake();
        await Task.Delay(1000);
        b.Label = "1";
        Fl.Awake();
        await Task.Delay(1000);
        b.Label = "Boom";
        Fl.Awake();
        using var chooser = new NativeFileChooser
        {
            Filter = [new FilterEntry("C header", "*.h")],
            Directory = "/home/milleniumbug/dokumenty/PROJEKTY/NotMine/cfltk/include",
            Title = "LMAO",
            Options = FileChooserOption.UseFilterExt,
            Type = FileChooserType.MultiFile,
        };
        var result = chooser.Show();
        Console.WriteLine(result);
        if (result == FileChooserResult.Success)
        {
            Console.WriteLine(string.Join(",", chooser.Filenames));
        }
    }
    
    public static void Main()
    {
        Group.Current = null;
        Fl.UnhandledCallback += (sender, ex) =>
        {
            Dialogs.Alert($"${ex.GetType().FullName}\n{ex.Message}\n\n{ex.StackTrace}");
        };
        var screen = Screens.MainScreen();
        var windowSize = new Size(800, 600);
        var window = new Window(new Rectangle(screen.Location + screen.Size/2 - windowSize/2, windowSize), "Click me");
        Button button;
        PngImage png;
        Box box;
        using (window.BeginEnd())
        {
            var scroll = new Scroll(new Rectangle(Point.Empty, window.Size));
            using (scroll.BeginEnd())
            {
                var width = 140;
                var button3 = new RadioButton(new Rectangle(240, 10, width, 40), "Click me");
                var button4 = new LightButton(new Rectangle(240, 60, width, 40), "Click me");
                var button5 = new CheckButton(new Rectangle(240, 110, width, 40), "Click me");
                var button6 = new RepeatButton(new Rectangle(240, 240, width, 40), "Click me");
                var button7 = new ReturnButton(new Rectangle(240, 290, width, 40), "Click me");
                var group = new Group(scroll.Rectangle);
                using (group.BeginEnd())
                {
                    var button8 = new RadioRoundButton(new Rectangle(40, 20, width, 40), "Yes")
                    {
                        Type = ButtonType.Radio
                    };
                    var button9 = new RadioRoundButton(new Rectangle(40, 70, width, 40), "No")
                    {
                        Type = ButtonType.Radio
                    };
                }

                var button10 = new RadioButton(new Rectangle(240, 360, width, 40), "Click me");
                var button11 = new RadioLightButton(new Rectangle(240, 410, width, 40), "Click me");

                button = new Button(new Rectangle(420, 210, width, 40), "Click me");
                button.SetCallback(Callback);

                button = new Button(new Rectangle(420, 290, width, 40), "Click me");
                button.SetCallback(Callback2);

                var helpView = new HelpView(new Rectangle(0, 600, 600, 400), "Hello World");
                helpView.Value = "<h1>Hello World!</h1><br><b>This</b> is some text<br>お前はもう死んでいる";

                /*box = new Box(new Rectangle(250, 250, 250, 250));
                png = new PngImage("/home/milleniumbug/dokumenty/asdf/ch50.png");
                Console.WriteLine($"Fail: {png.Fail}");
                png.Scale(box.Size, canExpand: true);
                box.Image = png;*/

                var w = new ColorChooser(new Rectangle(250, 1250, 250, 250), "Pick your fighter");
                w.Rgb = new ColorRgbF64(-1, 9, 0.4);
            }
            window.Resizable(window);
        }

        window.Show();
        Fl.Run();
    }

    private static void Callback2(object? sender, CallbackReason e)
    {
        Fl.Beep(BeepType.Error);
    }
}