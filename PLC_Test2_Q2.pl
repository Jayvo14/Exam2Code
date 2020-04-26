$var = "Global";

sub inner {
    print "inner:         $var\n";
}

sub changelocal {
    my $var = "Local";
    print "changelocal:   $var\n";

    &inner
}

sub changedynamic {
    local $var = "Dynamic";
    print "changedynamic: $var\n";

    &inner
}

&inner
&changelocal
&changedynamic