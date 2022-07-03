#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <speechapi_cxx.h>
#include <locale.h>
#include "robot-master\Source\Global.h"
#include "robot-master\Source\Robot.h"
#define _CRT_SECURE_NO_WARNINGS


ROBOT_NS_USE_ALL;

using namespace std;
using namespace Microsoft::CognitiveServices::Speech;
using namespace Microsoft::CognitiveServices::Speech::Audio;
auto autenticacao = SpeechConfig::FromSubscription("bfa38ec54083465ca650497528698ddf", "brazilsouth");
auto requisicao_textofala = SpeechSynthesizer::FromConfig(autenticacao);
auto mic_config = AudioConfig::FromDefaultMicrophoneInput();
auto requisicao_falatexto = SpeechRecognizer::FromConfig(autenticacao, mic_config);

void texto_em_fala(string texto) {
    cout << texto << endl;
    requisicao_textofala->SpeakTextAsync(texto).get();
    
}

string corpo_fala_texto() {
    Keyboard keyboard;
    auto resultado_fala = requisicao_falatexto->RecognizeOnceAsync().get();
    cout << resultado_fala->Text + "\n";
    return resultado_fala->Text;

}

string formatando_string(string usuario_email) {
    cout << "Antes de apagar" << usuario_email << endl;
    //removendo as virgulas e espacos que o reconhecimento de voz insere
    int i;
    for (int i = 0; i < usuario_email.size(); i++) {
        if (usuario_email[i] == ' ' || usuario_email[i] == ',') {
            usuario_email.erase(usuario_email.begin() + i);
        }
    }
    //nova verificacao para eliminar os espacos que eram virgulas
    for (int i = 0; i < usuario_email.size(); i++) {
        if (usuario_email[i] == ' ' || usuario_email[i] == ',') {
            usuario_email.erase(usuario_email.begin() + i);
        }
    }
    cout << "Apos apagar:" << usuario_email << endl;
    return usuario_email;
}

void assunto(string assunto_requerido) {
    Mouse mouse;
    Keyboard keyboard;
    keyboard.AutoDelay.Min = 1000;
    keyboard.AutoDelay.Max = 1000;
    mouse.AutoDelay.Max = 1000;
    mouse.AutoDelay.Max = 1000;
    texto_em_fala("Diga o assunto do email");
    assunto_requerido = corpo_fala_texto();
    //salvando em um arquivo o assunto
    ofstream arquivo;
    arquivo.open("j7hg98n.txt");
    arquivo << assunto_requerido;
    arquivo.close();
    //pegando o nome do assunto no arquivo para copiar e colar no gmail
    keyboard.Click(KeySystem);
    Timer::Sleep(2000);
    keyboard.Click(KeyJ);
    keyboard.Click(Key7);
    keyboard.Click(KeyH);
    keyboard.Click(KeyG);
    keyboard.Click(Key9);
    keyboard.Click(Key8);
    keyboard.Click(KeyN);
    keyboard.Click(KeyEnter);
    Timer::Sleep(3000);
    keyboard.Press(KeyControl);
    keyboard.Click(KeyA);
    keyboard.Release(KeyControl);
    keyboard.Click(KeyRight);
    keyboard.Click(KeyBackspace);
    keyboard.Press(KeyControl);
    keyboard.Click(KeyA);
    keyboard.Click(KeyC);
    keyboard.Release(KeyControl);
    keyboard.Press(KeyAlt);
    keyboard.Click(KeyF4);
    keyboard.Release(KeyAlt);
    keyboard.Click(KeyEnter);
    Mouse::SetPos(925, 386);
    mouse.Click(ButtonLeft);
    keyboard.Press(KeyControl);
    keyboard.Click(KeyV);
    keyboard.Release(KeyControl);
}

void pegando_nome_de_usuario(string usuario_email) {
    //clicando no botao de escrever do gmail
    Mouse mouse;
    Keyboard keyboard;
    //escrevendo o nome da pessoa; para isso, precisaremos criar um arquivo txt que contenha o nome de usuario da pessoa
    //para, assim, selecionarmos e copiarmos o usuario
    ofstream arquivo;
    arquivo.open("x1y2v98hg.txt");
    arquivo << usuario_email;
    arquivo.close();
    //abrindo o arquivo e copiando o nome de usuario
    keyboard.AutoDelay.Min = 500;
    keyboard.AutoDelay.Max = 500;
    mouse.AutoDelay.Min = 500;
    mouse.AutoDelay.Max = 500;
    keyboard.Click(KeySystem);
    Timer::Sleep(4000);
    keyboard.Click(KeyX);
    keyboard.Click(Key1);
    keyboard.Click(KeyY);
    keyboard.Click(Key2);
    keyboard.Click(KeyV);
    keyboard.Click(Key9);
    keyboard.Click(Key8);
    keyboard.Click(KeyEnter);
    Timer::Sleep(2000);
    Mouse::SetPos(250, 158);
    keyboard.Press(KeyControl);
    keyboard.Click(KeyA);
    keyboard.Release(KeyControl);
    keyboard.Click(KeyRight);
    keyboard.Click(KeyBackspace);
    keyboard.Press(KeyControl);
    keyboard.Click(KeyA);
    keyboard.Click(KeyC);
    keyboard.Release(KeyControl);
    //fechando o arquivo
    keyboard.Press(KeyAlt);
    keyboard.Click(KeyF4);
    keyboard.Release(KeyAlt);
    keyboard.Click(KeyEnter);
}

void abrindo_chorme() {
    Keyboard keyboard;
    Mouse mouse;
    keyboard.AutoDelay.Min = 500;
    keyboard.AutoDelay.Max = 500;
    mouse.AutoDelay.Min = 500;
    mouse.AutoDelay.Max = 500;
    //abrindo o chorme pelo sistema 
    keyboard.Click(KeySystem);
    Timer::Sleep(4000);
    keyboard.Click(KeyC);
    keyboard.Click(KeyH);
    keyboard.Click(KeyO);
    keyboard.Click(KeyR);
    keyboard.Click(KeyM);
    keyboard.Click(KeyE);
    keyboard.Click(KeyEnter);
    Timer::Sleep(3000);
}

void abrindo_gmail() {
    //executando o gmail pelo navegador
    Keyboard keyboard;
    Mouse mouse;
    keyboard.AutoDelay.Min = 500;
    keyboard.AutoDelay.Max = 500;
    keyboard.Click(KeyG);
    keyboard.Click(KeyM);
    keyboard.Click(KeyA);
    keyboard.Click(KeyI);
    keyboard.Click(KeyL);
    keyboard.Click(KeyPeriod);
    keyboard.Click(KeyC);
    keyboard.Click(KeyO);
    keyboard.Click(KeyM);
    keyboard.Click(KeyEnter);
    Timer::Sleep(3000);
}

void anexando_arquivo() {
    Keyboard keyboard;
    Mouse mouse;
    //clicando no botao escrever do gmail
    keyboard.AutoDelay.Min = 500;
    keyboard.AutoDelay.Max = 500;
    mouse.AutoDelay.Min = 1000;
    mouse.AutoDelay.Max = 1000;
    Mouse::SetPos(45, 165);
    Timer::Sleep(3000);
    mouse.Click(ButtonLeft);
    Timer::Sleep(4000);
    //colando o dominio do email salvo no arquivo
    keyboard.Press(KeyControl);
    keyboard.Click(KeyV);
    keyboard.Release(KeyControl);
    Timer::Sleep(2000);
    keyboard.Press(KeyShift);
    keyboard.Click(Key2);
    keyboard.Release(KeyShift);
    keyboard.Click(KeyG);
    keyboard.Click(KeyM);
    keyboard.Click(KeyA);
    keyboard.Click(KeyI);
    keyboard.Click(KeyL);
    keyboard.Click(KeyPeriod);
    keyboard.Click(KeyC);
    keyboard.Click(KeyO);
    keyboard.Click(KeyM);
    keyboard.Click(KeyEnter);
    Timer::Sleep(2000);
    //pegando o assunto requerido
    string assunto_requerido;
    assunto(assunto_requerido);
    //anexando o arquivo
    Mouse::SetPos(1053, 790);
    mouse.Click(ButtonLeft);
    Timer::Sleep(2000);
    keyboard.Click(KeyI);
    keyboard.Click(KeyA);
    keyboard.Click(KeyA);
    keyboard.Click(KeyE);
    keyboard.Click(KeyD);
    keyboard.Click(KeyEnter);
    keyboard.Click(KeyEnter);
    Timer::Sleep(1500);
    keyboard.Click(KeyG);
    keyboard.Click(KeyM);
    keyboard.Click(KeyA);
    keyboard.Click(KeyI);
    keyboard.Click(KeyL);
    keyboard.Click(KeyEnter);
    Timer::Sleep(6000);
    //enviando o arquivo
    Mouse::SetPos(920, 790);
    mouse.Click(ButtonLeft);
    keyboard.Click(KeyEnter);

}

int main()
{
    
    //setando as configuracoes para falar com o usuario e receber o que ele falou
    autenticacao->SetSpeechRecognitionLanguage("pt-BR");
    autenticacao->SetSpeechSynthesisLanguage("pt-BR");
    autenticacao->SetSpeechSynthesisVoiceName("pt-BR-AntonioNeural");
    requisicao_textofala = SpeechSynthesizer::FromConfig(autenticacao);
    requisicao_falatexto = SpeechRecognizer::FromConfig(autenticacao, mic_config);
    
    try {
        texto_em_fala("Olá! Seja Bem-Vindo ao Email-Inteligente");
        texto_em_fala("Reproduza a mensagem por voz: ");
        string texto = corpo_fala_texto();
        
        //criando o arquivo para salvar o que o usuario disse
        ofstream arquivo;
        arquivo.open("gmail.txt");
        arquivo << texto;
        arquivo.close();
        
        //pedindo para o usuario dizer o usuario de email de quem ele quer enviar
        texto_em_fala("Diga o nome do usuario do email que voce deseja enviar, de preferência, soletre para facilitar a compreensao. Caso haja algum ponto, apenas ignore-o na hora de falar");
        string usuario_email = corpo_fala_texto();
        texto_em_fala("Aguarde, o envio está sendo processado");
        
        string usuario_email_formatado = formatando_string(usuario_email);

        //procedimentos para fazer as automacoes de enviar o email
        pegando_nome_de_usuario(usuario_email_formatado);
        abrindo_chorme();
        abrindo_gmail();
        anexando_arquivo();
    
    }
    catch(exception e) {
        cout << e.what();
    }
    
    
}


