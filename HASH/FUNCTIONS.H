$ifndef hash_functions
    $define hash_functions 1
    
    deffun adler_32(data)
    deffun adler_64(data)
    deffun fletcher_64(data)
    deffun jenkins(data, length) calling "qm.hash.jenkins"
    deffun qm.hash.jenkins(data, length)

$endif
