# RECourseCapstone

Reverse engineering course capstone project.

This project is part of a (new and work in progress) reverse engineering course and is intended to be solved by students on their own. However, this project does provide a walk through to use as guidance for one possible path of "solving" the project.

## Goals
This project is intended to be black-box reverse engineered. The following are some of the goals one should strive to achieve.

1. Establish consistent (would pass "updates") patches or run-time changes (see following) to the binary or process.
2. Log all process network traffic in a decrypted form.
    * This is primarily intended to be done with a hook or patch. However, a secondary solution of reversing the intentionally poor encryption is accepted in addition.
3. Reverse engineer at least one of the more complicated internal data structures and accurately document it.
4. Construct a custom client or server.
    * Since custom encryption is used, a client/server from the ground up is accepted. However, a client/server which hijacks the existing binary is intended.

Of course, this project can be approached in any way, however, there is an accompanying course to go with this project which is intended to be used.

## Building

1. `git clone --recursive <URL>`
2. Open in Visual Studio 2022.
3. Click the build button.