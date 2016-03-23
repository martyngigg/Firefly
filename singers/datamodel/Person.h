#ifndef SINGERS_DATAMODEL_PERSON_H_
#define SINGERS_DATAMODEL_PERSON_H_

#include "SingersDataModelModule.h"

namespace singers {
  namespace datamodel {

    /**
     * Defines the model of a Person.
     * It is a simple model where a Person has a only two
     * attributes:
     *   - First name
     *   - Last name
     */
    class SINGERSDATAMODEL_EXPORT Person {
    public:
      Person();
    };

  }
}

#endif // SINGERS_DATAMODEL_PERSON_H_
