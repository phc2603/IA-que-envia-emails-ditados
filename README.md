# IA-que-envia-emails-ditados
Inteligência Artificial, feita em C++, que visa enviar email apenas usando comandos de voz. Foram usados Api da Microsoft para reconhecimento de voz e a biblioteca robot.h para automação. O email é apenas via gmail, e é necessário que a pasta do arquivo esteja salva no diretório padrão, em que o anexo de arquivos do gmail abre, e o nome no arquivo dentro do código, para filtrar a pasta nesse diretório deve ser alterado para o desejado. O motivo disso, é para evitar de pesquisar a pasta dentro de todo o sistema, otimizando o tempo do envio.


OBS: atente-se que: Nas partes que contém o método Mouse::Set(x,y); é necessário adaptar. Isso acontece, pelo fato dessas coordenadas variavem dependendo do tamanho do monitor. Ou seja, para cada resolução, a posição não irá coincidir com o desejado.

OBS2: ao usar a API, verifique-se de que o arquivo .nupkg da Microsoft está incluído no diretório que foi baixado os serviços, juntamente com o arquivo de signature.

ASSISTA AO VÍDEO PARA SABER COMO FUNCIONA NA PRÁTICA: https://www.youtube.com/watch?v=eigULbnTp0I&ab_channel=PedroCaillaux
