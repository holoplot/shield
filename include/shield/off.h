#if defined(__clang__)
    #pragma clang diagnostic pop
#elif defined(__GNUC__) || defined(__GNUG__)
    #pragma GCC diagnostic pop
#elif (_MSC_VER)
    #pragma warning(pop)
#endif
