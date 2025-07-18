#ifndef CBUILTINS_H
# define CBUILTINS_H

# include "minishell.h"
# include "forward.h"
# include "allocators/allocator.h"
# include "tools/io.h"

# define NO_FORK_MAX_INDEX 4

typedef int	(*t_builtin_fn)(t_ctx *ctx, char **args);

typedef struct s_parser
{
	int					sign;
	unsigned long long	acc;
	unsigned long long	limit;
}	t_parser;

int	builtin_echo(t_ctx *ctx, char **args);
int	builtin_cd(t_ctx *ctx, char **args);
int	builtin_pwd(t_ctx *ctx, char **args);
int	builtin_export(t_ctx *ctx, char **args);
int	builtin_unset(t_ctx *ctx, char **args);
int	builtin_env(t_ctx *ctx, char **args);
int	builtin_exit(t_ctx *ctx, char **args);

#endif
