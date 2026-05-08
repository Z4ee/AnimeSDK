#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7AADF24AF29C5ADF.h"
#include "unitysdk/Enum_3_81A3942BCC6E42B5.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/UIWidgetGroup.h"

namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIWidgetController; }
namespace UnityEngine { class Transform; }

inline static constexpr unsigned int UIWidgetGroupT_1_TypeDefinitionIndex = 55791;

template <typename T>
class UIWidgetGroupT_1 : public ::UIWidgetGroup
{
public:
	::MoleMole::UIBaseController* _panel; // 0x0
	::Enum_3_81A3942BCC6E42B5 _ctrlId; // 0x0
	::UnityEngine::Transform* _parent; // 0x0
	::Struct_2_575273D27F02957E _binderInfo; // 0x0
};
