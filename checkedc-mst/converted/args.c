/* For copyright information, see olden_v1.0/COPYRIGHT */

extern int atoi(const char *);

int NumNodes = 1;

int dealwithargs(int argc, _Array_ptr<char *> argv : count(argc)) {
  int level;

  if (argc > 1)
    level = atoi(argv[1]);
  else
    level = 64;

  return level;
}
