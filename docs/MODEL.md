# Traditional Armenian Calendar — model

**Stable ID:** `armenian-traditional`.

The implementation represents a 365-day wandering Armenian calendar, anchored to 11 July 552 Julian. Its twelve months contain thirty days each, followed by five epagomenal days; it does not add a leap day. The arithmetic is continued in both directions.

This is deliberately separate from later Armenian calendar reforms. Historical usage in different periods is not certified by a mathematical continuation.

**Present status:** this repository contains its own copied provider source and build. The original implementation also remains in [Libraries/Common](https://github.com/Infiltrator-Projects/Libraries/tree/main/resources/temporal). See the independent forensic audit for its qualification and limits.

**Sources:** [Calendar chronology models](https://github.com/Infiltrator-Projects/Calendar/blob/main/docs/MODELS.md); [Common historical fidelity audit](https://github.com/Infiltrator-Projects/Libraries/blob/main/docs/TEMPORAL_HISTORICAL_FIDELITY.md).

## Source copy status

The model-specific implementation and required helpers are now copied into this repository. Its behaviour was compared with the original Common 1.19.78 provider; this adds copy-regression evidence, not a new independent historical audit. See [source provenance](../SOURCE.md) and [validation results](../VALIDATION-RESULTS.json). The original Common implementation remains in place.
