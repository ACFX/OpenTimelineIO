#ifndef OTIO_MISSING_REFERENCE_H
#define OTIO_MISSING_REFERENCE_H

#include "mediaReference.h"

class MissingReference final : public MediaReference {
public:
    struct Schema {
        static auto constexpr name = "MissingReference";
        static int constexpr version = 1;
    };

    using Parent = MediaReference;

    MissingReference();

    virtual bool is_missing_reference() const;

protected:
    virtual ~MissingReference();

    virtual bool read_from(Reader&);
    virtual void write_to(Writer&) const;
};

#endif