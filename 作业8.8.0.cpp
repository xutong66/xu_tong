a.values< int 5>fractions={2<=x&&x<=10&&x%2=0}
b.unsigned int *vptr

c.for ( int i = 0; i <= 5; ++i )
        cout << setw( 7 ) << i << setw( 13 ) << values[ i ] << '\n';

d.vPtr = values;
    vPtr = &values[ 0 ];

e.for ( int j = 0; j <= 5; ++j )
        cout << "*( vPtr + " << j << " ) = " << *( vPtr + j ) << '\n';

f.for ( int k = 0; k <= 5; ++k )
        cout << "*( values + " << k << " ) = " << *( values + k ) << '\n';

g.for ( int n = 0; n <= 5; ++n )
        cout << "values[ " << n << " ] = " << values[ n ] << '\n';

h.values[ 4 ];
    *( values + 4 );
    *vPtr[ 4 ];
    *( vPtr + 4 );

i.vPtr + 3 �����õĵ�ַ�� 1002500 + 3 * 2 = 1002506 ����λ�ô洢��ֵΪ 8��

j.unsigned int *vPtr, values[ 4 ];
    vPtr -= 4;
    vPtr ���õĵ�ַ�� 1002500 - 3 * 4 = 1002488 ����λ�ô洢��ֵΪ 2��
