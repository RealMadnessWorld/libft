


void	*ft_calloc(size_t count, size_t size)
{
	char *ptr;

	ptr = (void *)malloc(count * size);
	if(!ptr)
		return (NULL);
	bzero(ptr, count);
	return (ptr);
}
