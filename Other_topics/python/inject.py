def inject_code(file_path, code_lines, line_number):
    try:
        # Read the file with UTF-8 encoding
        with open(file_path, 'r', encoding='utf-8') as file:
            lines = file.readlines()

        # Validate the line number
        if line_number < 1 or line_number > len(lines) + 1:
            print(f"Error: Line number must be between 1 and {len(lines) + 1}.")
            return

        # Insert the code lines at the specified line number
        for i, code in enumerate(code_lines):
            lines.insert(line_number - 1 + i, code + '\n')

        # Write the updated content back to the file with UTF-8 encoding
        with open(file_path, 'w', encoding='utf-8') as file:
            file.writelines(lines)

        print(f"Code successfully injected into {file_path} at line {line_number}.")

    except FileNotFoundError:
        print(f"Error: The file '{file_path}' does not exist.")
    except Exception as e:
        print(f"An error occurred: {e}")

# Predefined code lines to inject
code_lines = [
    '// ! ! ! ! ! DIESE DATEI DARF  N I C H T  VERÄNDERT WERDEN  ! ! ! ! !',
    '// Jobname            : INFO',
    '// -------------------------------------------------------------------',
    '// Gültig:',
    '// Lastenheft Diagnose Ausgabe 8',
    '//                     SAP 10000786',
    '// -------------------------------------------------------------------',
    '// History:',
    '// 18.11.2005  rd  V0.001 Erstellung',
    '// 28.11.2005  rd  V0.002 CAN Parameter dazu',
    '// 02.02.2006  gh  V0.003 Include-Name geändert (wie Job-Name)',
    '// *******************************************************************',
    '// UDS_INITIALISIERUNG.B2S @(#)@ V0.003 @(#)@',
    '// *******************************************************************',
    'job ( name     :       INFO;',
    '    comment   :       INFO;',
    '    result    :       DONE;',
    '      type    :       int;',
    '       defrslt :       ;',
    '       comment :       1, wenn Okay;',
    '   )',
    '{',
    'open_communication();                              // Kommunikation starten',
    'stop_frequent();                                   // evtl. bestehende ACK killen',
    'set_repeat_counter(REPEAT_COUNTER);                // Wiederholzaehler setzen',
    'set_communication_pars(PARAMETER_BMW_KWP2000_CAN); // Konzept einstellen',
    'set_answer_length(AWLEN_BMW_KWP2000_CAN);          // Antwortlaenge',
    ' DONE = 1;                                          // muss immer \'DONE\' heissen !',
    '}',
    '//',
    '// ! ! ! ! ! DIESE DATEI DARF  N I C H T  VERÄNDERT WERDEN  ! ! ! ! !',
    '//',
    '// -------------------------------------------------------------------'
]

# Get the file path and line number from the user
file_path = input("Enter the path to your C file: ").strip('"').strip()
line_number = 330
print(f"Using file path: {file_path}")
# Inject the code
inject_code(file_path, code_lines, line_number)