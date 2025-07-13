CFLTK_DIR=/home/milleniumbug/dokumenty/PROJEKTY/NotMine/cfltk
rm -rf Native
mkdir Native
{
  for header in "$CFLTK_DIR"/include/*.h; do echo "#include \"$header\""; done | gcc -x c -E - | grep -v -P '^#'
} > Native/interface.h

cd Native || exit
cp ../config-extract.json .
cp ../config-generate-cs.json .
c2ffi extract --config config-extract.json
c2ffi merge --inputDirectoryPath ffi --outputFilePath ffi/cross-platform-ast.json
c2cs generate --config config-generate-cs.json