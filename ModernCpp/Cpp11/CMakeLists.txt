set(MODULES
        Chapter1_MoreConcise

        )

foreach (module ${MODULES})
    add_subdirectory(${module})
endforeach ()