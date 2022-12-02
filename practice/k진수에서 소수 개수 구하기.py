def convert(n, base):
    q, r = divmod(n, base)
    if q == 0:
        return str(r)
    else:
        return convert(q, base) + str(r)
