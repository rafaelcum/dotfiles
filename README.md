Some of my config files may be useful to people on their way to making and using software, so I'm sharing them on this Github repository. Remember that some of those files are configured the way I intended and am familiar with. You can customize them according to your needs.

## Digispark

`DigiKeyboard.h` is a file from the digistump libraries that sets some keys as words to work with Arduino as an HID. Using the Usage ID table in section 10 of [usb.org documentation](https://www.usb.org/sites/default/files/documents/hut1_12v2.pdf), I added some keys like the arrow keys and TAB. Copy and paste the decimal or the hexadecimal version into your local Arduino file.

`loopKeys.h` is a file that implements the `loopKeys()` function code in C++ to loop any key of Digispark library. Examples are available in the file itself.

## Web

`MLComments.js` é um bookmark/favorito que pode ser adicionado no navegador para abrir a página de comentários de um determinado capítulo de qualquer obra presente no site [Manga Livre](https://mangalivre.net). Para adicionar o script, basta clicar com botão direito na barra de favoritos, adicionar um novo favorito com qualquer nome e copiar todo o código do arquivo para o endereço do favorito. Agora em qualquer obra você pode voltar a ler seus comentários favoritos!
