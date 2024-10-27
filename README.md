# Pipex

## Summary

This project will let you discover in detail a UNIX mechanism that you already know by using it in your program. Your program will be executed as follows:

```
./pipex file1 cmd1 cmd2 file2
```

It must take 4 arguments:
- `file1` and `file2` are file names.
- `cmd1` and `cmd2` are shell commands with their parameters.

It must behave exactly the same as the shell command below:

```
$> < file1 cmd1 | cmd2 > file2
```

## Examples

```
$> ./pipex infile "ls -l" "wc -l" outfile
```

Should behave like:

```
< infile ls -l | wc -l > outfile
```

```
$> ./pipex infile "grep a1" "wc -w" outfile
```

Should behave like:

```
< infile grep a1 | wc -w > outfile
```
