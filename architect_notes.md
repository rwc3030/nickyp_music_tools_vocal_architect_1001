# Architect Notes

## Remaining Features and Tasks

1. Review the generated code for logical flow.
2. Check for edge cases that may not have been handled.
3. Ensure functional integrity across all components.

## Code Duplication and Cleanup Actions

1. **Redundant Test Cases**: The `HarmonyGeneratorTest.cpp` and `harmony_generator_tests.cpp` files contain similar test cases for handling empty input vocal tracks and valid input vocal tracks. These can be consolidated into a single test file to avoid duplication.

2. **Repeated Code in UI Components**: The `MainComponent.cpp` and `HarmonyGenerator.cpp` files both have similar logic for handling UI updates and state management. This logic could be refactored into a shared utility function to reduce redundancy.

3. **Similar Documentation**: The `README.md` and `design_functional_vision.md` files both describe the features of the VocalArchitect. Some sections overlap and could be merged or referenced to streamline documentation.

## Bugs and Functional Issues

1. **Bug in Harmony Generation**: Occasionally, the harmony generation process fails to produce output when the input vocal track is at the maximum harmony level.
2. **UI Update Delay**: There is a noticeable delay in UI updates after the harmony generation process is initiated, which may confuse users.

