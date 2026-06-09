cout << "Enter a number: " <<endl;
    cin >> b; //15
    cout << "Before shifting: b = " << b << endl;
    i=0;
    while(i<3){
        b=b>>1; //b=15/2=7...right shift
        i++;
        cout << "After shifting: b = " << b << endl;
    }