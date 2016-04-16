#include <stdlib.h>
#include <stdio.h> 

int  menu (int totalBoletas, int choice);
void resume(double sale, int totalBoletas, int sodexo, int visaVale,  int ticketRefeicao, int dinners, int amex, int visa, int redeshop, int master, int hipercard, int visaElectron, int giftCard, int outros, double cashIn, double valores[20][100]);

//CONSTS-------------------------------------------//

const int SODEXO                    = 1;
const int VISAVALE                  = 2;
const int TICKETREFEICAO            = 3;
const int DINNERS                   = 4;
const int AMEX                      = 5;
const int VISA                      = 6;
const int REDESHOP                  = 7;
const int MASTER                    = 8;
const int HIPERCARD                 = 9;
const int VISAELECTRON              = 10;
const int GIFTCARD                  = 11;
const int OUTROS                    = 12;

const int NUM_BANDEIRAS             = 12;
//END_CONSTS---------------------------------------//

int main()
{

    //Variables----------------------------------------//
    int      sodexo                    = 0;
    int      visaVale                  = 0;
    int      ticketRefeicao            = 0;
    int      dinners                   = 0;
    int      amex                      = 0;
    int      visa                      = 0;
    int      redeshop                  = 0;
    int      master                    = 0;
    int      hipercard                 = 0;
    int      visaElectron              = 0;
    int      giftCard                  = 0;
    int      outros                    = 0;

    int      i                         = 0;
    int      choice                    = 0;
    
    int      totalBoletas              = 0;
    double   cashIn                    = 0;
    double   sale                      = 0;
    double   valores[20][100];

    char m_ask[100]     = {"Qual o valor da boleta?\nValor: R$ "};
    char m_youSale[100] = {"\nQual o Total da sua venda?\nValor: R$ "};
    char m_cashIn[200]  = {"\nTu tinha quanto de dinheiro quando entrou, gata? Se tu não sabe, bixa burra, põe -1 (menos 1):\nValor: R$ "};
    //END_VARIABLES-------------------------------------//


    //START---------------------------------------------//

    system("clear");
    printf("Aperta ENTER pra lacrar teu caixa, Viada!\n");
        getchar();
    system("clear");
    printf("%s", m_youSale);
    scanf("%lf",&sale);
        getchar();
    printf("%s", m_cashIn);
    scanf("%lf", &cashIn);
        getchar();
    printf("\nAperta ENTER pra começar a botar as boletas, Mana!\n");
    printf("Espero que você já tenha pago seu Tip...\n");
        getchar();

    while(choice >= 0 && choice <= NUM_BANDEIRAS){ 
        choice = menu(totalBoletas,choice);

        if (choice >= 0 && choice <= NUM_BANDEIRAS){
            if (choice == SODEXO){
                sodexo++;
                printf("\nBoleta Sodexo\n");
                printf("%s ", m_ask);
                scanf("%lf", &valores[SODEXO][sodexo]);
                valores[SODEXO][0] = valores[SODEXO][0] + valores[SODEXO][sodexo];
            }
            else if (choice == VISAVALE){
                printf("\nBoleta VISAVALE\n");
                visaVale++;
                printf("%s ", m_ask);
                scanf("%lf", &valores[VISAVALE][visaVale]);
                valores[VISAVALE][0] = valores[VISAVALE][0] + valores[VISAVALE][visaVale];
            }
            else if (choice == TICKETREFEICAO){
                printf("\nBoleta TICKETREFEICAO\n");
                ticketRefeicao++;
                printf("%s ", m_ask);
                scanf("%lf", &valores[TICKETREFEICAO][ticketRefeicao]);
                valores[TICKETREFEICAO][0] = valores[TICKETREFEICAO][0] + valores[TICKETREFEICAO][ticketRefeicao];
            }
            else if (choice == DINNERS){
                printf("\nBoleta Dinners\n");
                dinners++;
                printf("%s ", m_ask);
                scanf("%lf", &valores[DINNERS][dinners]);
                valores[DINNERS][0] = valores[DINNERS][0] + valores[DINNERS][dinners];
            }
            else if (choice == AMEX){
                printf("\nBoleta Amex\n");
                amex++;
                printf("%s ", m_ask);
                scanf("%lf", &valores[AMEX][amex]);
                valores[AMEX][0] = valores[AMEX][0] + valores[AMEX][amex];
            }
            else if (choice == VISA){
                visa++;
                printf("\nBoleta Visa\n");
                printf("%s ", m_ask);
                scanf("%lf", &valores[VISA][visa]);
                valores[VISA][0] = valores[VISA][0] + valores[VISA][visa];
            }
            else if (choice == REDESHOP){
                redeshop++;
                printf("\nBoleta Redeshop\n");
                printf("%s ", m_ask);
                scanf("%lf", &valores[REDESHOP][redeshop]);
                valores[REDESHOP][0] = valores[REDESHOP][0] + valores[REDESHOP][redeshop];
            }
            else if (choice == MASTER){
                master++;
                printf("\nBoleta Master\n");
                printf("%s ", m_ask);
                scanf("%lf", &valores[MASTER][master]);
                valores[MASTER][0] = valores[MASTER][0] + valores[MASTER][master];
            }
            else if (choice == HIPERCARD){
                hipercard++;
                printf("\nBoleta Hipercard\n");
                printf("%s ", m_ask);
                scanf("%lf", &valores[HIPERCARD][hipercard]);
                valores[HIPERCARD][0] = valores[HIPERCARD][0] + valores[HIPERCARD][hipercard];
            }    
            else if (choice == VISAELECTRON){
                visaElectron++;
                printf("\nBoleta Visa Electron\n");
                printf("%s ", m_ask);
                scanf("%lf", &valores[VISAELECTRON][visaElectron]);
                valores[VISAELECTRON][0] = valores[VISAELECTRON][0] + valores[VISAELECTRON][visaElectron];
            }
            else if (choice == GIFTCARD){
                giftCard++;
                printf("\nBoleta Gift Card\n");
                printf("%s ", m_ask);
                scanf("%lf", &valores[GIFTCARD][giftCard]);
                valores[GIFTCARD][0] = valores[GIFTCARD][0] + valores[GIFTCARD][giftCard];
            }
            else if (choice == OUTROS){
                outros++;
                printf("\nBoleta de Tipo Ausente no Carimbo:\n");
                printf("%s ", m_ask);
                scanf("%lf", &valores[OUTROS][outros]);
                valores[OUTROS][0] = valores[OUTROS][0] + valores[OUTROS][outros];
            }
        choice = 0; //Redundancia pra evitar um loop sinistro por conta do double - acho eu
        printf("Choice = %i\n", choice );
        }
        else
        {
            printf("Buguei\n");
        }
        totalBoletas = sodexo + visaVale + ticketRefeicao + dinners + amex + visa + redeshop + master + hipercard + visaElectron + giftCard + outros;
    }

    valores[0][0] = 0;
    for (i = 1; i < 20; ++i)
        valores[0][0] = valores[0][0] + valores[i][0];

    resume(sale,totalBoletas,sodexo,visaVale,ticketRefeicao,dinners,amex,visa,redeshop,master,hipercard,visaElectron,giftCard,outros,cashIn,valores);
    return 0;
}


int menu (int totalBoletas, int choice)
{
    do{
        system("clear");
        printf("Total de Boletas: %d\n", totalBoletas);
        printf("\nEscolhe aí a classe da nova Boleta:\n");
        printf(" 1 - Sodexo\n");
        printf(" 2 - Visa Vale\n");
        printf(" 3 - Ticket Refeição\n");
        printf(" 4 - Dinners\n");
        printf(" 5 - Amex\n");
        printf(" 6 - Visa\n");
        printf(" 7 - Redeshop\n");
        printf(" 8 - Master\n");
        printf(" 9 - Hipercard\n");
        printf("10 - Visa Electron\n");
        printf("11 - Giftcard\n");
        printf("12 - Outro\n");

        printf("\nTipo: ");
        scanf("%i", &choice);
        getchar();
    }while ((choice < -1) || (choice > NUM_BANDEIRAS));
    
    return choice;
}

void resume(double sale, int totalBoletas, int sodexo, int visaVale, int ticketRefeicao, int dinners, int amex, int visa, int redeshop, int master, int hipercard, int visaElectron, int giftCard, int outros,double cashIn, double valores[20][100])
{
    int      i           = 0;  
    double   payment     = 0;

    system("clear");
    printf("Total de Boletas:....%d\n", totalBoletas);
    printf("Valor da Venda:......%1.2lf\n", sale);
    
    if (sodexo != 0)
        {
            printf("...........................................................\n");
            printf("\tSodexo:\n");
            printf("\tQuantidade de Boletas:.......... %d\n", sodexo);
            printf("\tSoma total:..................... %1.2lf\n", valores[SODEXO][0]);
            printf("\tValor individual das Boletas somadas:\n");
            for (i = 1; i <= sodexo; ++i)
                printf("\t| %1.2lf", valores[SODEXO][i]);
            printf("\n...........................................................\n");
        }

        if (visaVale != 0)
        {
            printf("...........................................................\n");
            printf("\tVisa Vale:\n");
            printf("\tQuantidade de Boletas:.......... %d\n", visaVale);
            printf("\tSoma total:..................... %1.2lf\n", valores[VISAVALE][0]);
            printf("\tValor individual das Boletas somadas:\n");
            for (i = 1; i <= visaVale; ++i)
                printf("\t| %1.2lf", valores[VISAVALE][i]);
            printf("\n...........................................................\n");
        }

        if (ticketRefeicao != 0)
        {
            printf("...........................................................\n");
            printf("\tTicket Refeição:\n");
            printf("\tQuantidade de Boletas:.......... %d\n", ticketRefeicao);
            printf("\tSoma total:..................... %1.2lf\n", valores[TICKETREFEICAO][0]);
            printf("\tValor individual das Boletas somadas:\n");
            for (i = 1; i <= ticketRefeicao; ++i)
                printf("\t| %1.2lf", valores[TICKETREFEICAO][i]);
            printf("\n...........................................................\n");
        }

        if (dinners != 0)
        {
            printf("...........................................................\n");
            printf("\tDinners:\n");
            printf("\tQuantidade de Boletas:.......... %d\n", dinners);
            printf("\tSoma total:..................... %1.2lf\n", valores[DINNERS][0]);
            printf("\tValor individual das Boletas somadas:\n");
            for (i = 1; i <= dinners; ++i)
                printf("\t| %1.2lf", valores[DINNERS][i]);
            printf("\n...........................................................\n");
        } 

        if (amex != 0)
        {
            printf("...........................................................\n");
            printf("\tAmex:\n");
            printf("\tQuantidade de Boletas:.......... %d\n", amex);
            printf("\tSoma total:..................... %1.2lf\n", valores[AMEX][0]);
            printf("\tValor individual das Boletas somadas:\n");
            for (i = 1; i <= amex; ++i)
                printf("\t| %1.2lf", valores[AMEX][i]);
            printf("\n...........................................................\n");
        } 

    if (visa != 0)
        {
            printf("...........................................................\n");
            printf("\tVisa:\n");
            printf("\tQuantidade de Boletas:.......... %d\n", visa);
            printf("\tSoma total:..................... %1.2lf\n", valores[VISA][0]);
            printf("\tValor individual das Boletas somadas:\n");
            for (i = 1; i <= visa; ++i)
                printf("\t| %1.2lf", valores[VISA][i]);
            printf("\n...........................................................\n");
        }

    if (redeshop != 0)
        {
            printf("...........................................................\n");
            printf("\tRedeshop:\n");
            printf("\tQuantidade de Boletas:.......... %d\n", redeshop);
            printf("\tSoma total:..................... %1.2lf\n", valores[REDESHOP][0]);
            printf("\tValor individual das Boletas somadas:\n");
            for (i = 1; i <= redeshop; ++i)
                printf("\t| %1.2lf", valores[REDESHOP][i]);
            printf("\n...........................................................\n");
        }

    if (master != 0)
        {
            printf("...........................................................\n");
            printf("\tMaster:\n");
            printf("\tQuantidade de Boletas:.......... %d\n", master);
            printf("\tSoma total:..................... %1.2lf\n", valores[MASTER][0]);
            printf("\tValor individual das Boletas somadas:\n");
            for (i = 1; i <= master; ++i)
                printf("\t| %1.2lf", valores[MASTER][i]);
            printf("\n...........................................................\n");
        }

    if (hipercard != 0)
        {
            printf("...........................................................\n");
            printf("\tHipercard:\n");
            printf("\tQuantidade de Boletas:.......... %d\n", hipercard);
            printf("\tSoma total:..................... %1.2lf\n", valores[HIPERCARD][0]);
            printf("\tValor individual das Boletas somadas:\n");
            for (i = 1; i <= hipercard; ++i)
                printf("\t| %1.2lf", valores[HIPERCARD][i]);
            printf("\n...........................................................\n");
        }

    if (visaElectron != 0)
        {
            printf("...........................................................\n");
            printf("\tVisa Electron:\n");
            printf("\tQuantidade de Boletas:.......... %d\n", visaElectron);
            printf("\tSoma total:..................... %1.2lf\n", valores[VISAELECTRON][0]);
            printf("\tValor individual das Boletas somadas:\n");
            for (i = 1; i <= visaElectron; ++i)
                printf("\t| %1.2lf", valores[VISAELECTRON][i]);
            printf("\n...........................................................\n");
        }

    if (giftCard != 0)
        {
            printf("...........................................................\n");
            printf("\tGift Card:\n");
            printf("\tQuantidade de Boletas:.......... %d\n", giftCard);
            printf("\tSoma total:..................... %1.2lf\n", valores[GIFTCARD][0]);
            printf("\tValor individual das Boletas somadas:\n");
            for (i = 1; i <= giftCard; ++i)
                printf("\t| %1.2lf", valores[GIFTCARD][i]);
            printf("\n...........................................................\n");
        }

    if (outros != 0)
        {
            printf("...........................................................\n");
            printf("\tTipo Ausente no Carimbo:\n");
            printf("\tQuantidade de Boletas:.......... %d\n", outros);
            printf("\tSoma total:..................... %1.2lf\n", valores[OUTROS][0]);
            printf("\tValor individual das Boletas somadas:\n");
            for (i = 1; i <= outros; ++i)
                printf("\t| %1.2lf", valores[OUTROS][i]);
            printf("\n...........................................................\n");
        }
    printf("...........................................................\n");
    
    payment = sale - valores[0][0];
    if (payment < 0)
        printf("\n\tVá lá RECEBER da ADM R$ %1.2lf, viaaado!\n\n", (payment*(-1)));
    else    
        printf("\n\tBixa, PAGUE A ADM R$ %1.2lf!\n\n", payment);

    double aux = 0;
    aux = ((sale*0.07)+cashIn);

    if (cashIn > 0)
        printf("\nE, hoje, você deve estar saindo com: R$ %1.2lf. \n", aux);
        
    printf("Lembre-se que esse valor não leva em conta suas caxinhas (dadas e recebidas!) =] \n") ;
    printf("\n\n****AGORA VÁ AJUDAR NO FECHAMENTO!**** S2 \n\n") ;

}