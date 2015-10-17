#define N  4
inline void swap(int &a, int &b)
{ int c = a; a = b; b = c; }

void out(int T[])
{ 
   for(int i = 0; i < N; i++) cout << T[i]; // 1234 bez rozdzielania...
   cout < endl; // nowa linia;
}

void permutacje (int T[N], int ix) // ix = 0..N-1
{
  if( ix < N-1 ) 
  { 
    for(int i = ix; i < N; i++)
    {
      swap(T[ix], T[i]); // zamienia dwa elementy miejscami
      permutacje(T, ix+1);
      swap(T[ix], T[i]); // przywracamy
    }
  }
  else out(T); // drukujemy wszystkie elementy
//test
}
