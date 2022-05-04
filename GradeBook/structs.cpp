// Հաշվեկշիռը նկարագրող ստրուկտուրա
struct Balance {
    long long all_money = 5000000; // Հաշվեկշռի մեջ գտնվող գումարը, որը սկզբնական ցանկացած օբյեկտի համար կազմում է 5000000 
    int month_incomes;// Այն գումարը, որը ամսեկան մտնումէ հաշվեկշռի մեջ
    int month_outcomes;// Այն գումարը, որը ամսեկան դուրս է գալիս հաշվեկշռի վրայից
    // Այն լոգիկան է որը կատարվում է այս դեպքում 
    /*
    Balance a;
    Balance b;
    a = b;
    */
    void operator=(const Balance& value)
    {
        // Վերը նշված կոդի համար այս իրականցումը կհամապատասխանի այս կոդի հետ
        this->all_money = value.all_money; // a.month_incomes = b.month_incomes;
        this->month_incomes = value.month_incomes; // a.month_incomes = b.month_incomes;
        this->month_outcomes = value.month_outcomes; // a.month_outcomes = b.month_outcomes;
    } 
};

// Հարկերի տեսկներին համապատասխանող տոկոսադրույքը, որը իրականացված է enum-ի միջոցով
enum Payment {KP = 5,HP,VP,EP,SP};

// Աշխատակից նկարագրող ստրուկտուրա
struct Employee {
    std::string name; // Աշխատակցի անունը 
    int month_sallary;// Աշխատակցի ամսավճարը որը կարող է տատանվել նշված միջակայքում [45000;200000] 
    int month_payment{}; // Աշխատկցի կողմից վճարվող հարկերի անդհանուր չափսը գումարի տեսքով
    // Այն լոգիկան է որը կատարվում է այս դեպքում 
    /*
    Employee a;
    Employee b;
    a = b;
    */
    void operator=(const Employee& value)
    {
        // Վերը նշված կոդի համար այս իրականցումը կհամապատասխանի այս կոդի հետ
        this->name = value.name; //a.name = b.name
        this->month_sallary = value.month_sallary; // a.month_sallary = b.month_sallary
        this->month_payment = value.month_payment; // a.month_payment = b.month_payment
    }
};

// Աշխատատեղի նկարագրող ստրուկտուրա
struct Office {
    int worker_count{}; // Աշխատավայրում բոլոր աշխատողների քանակը, որը կարող է տատանվել այս միջակայքում [10,100]
    Employee* workers;  //  Քանի որ մենք հստակ քանակ չունենք ստեղծում էնք միջիջոց որով կատարման ժամանակ նշված  
                        //  քանակության միջոցով կստեղծենք այն զնգվածը որի միջոցով կպահենք բոլոր աշխատակիցների
                        //  մասին տվյալները
    Balance office_balance; // Աշխատավայրի համար նախատեսված հաշվեկշիռը որի միջոցով աշխատակիցները կարողանում են
                            // ամսավճար ստանան և որին փոխանցվում է նրանց հարկերը
    Payment p_office[3];    // Աշխատավայրի կողմից վճարվող հարկերի տեսակները իրենց տոկոսադրույքի տեսքով
};