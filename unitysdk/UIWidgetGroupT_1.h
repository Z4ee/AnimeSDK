#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DBF2701137F18AA6.h"
#include "unitysdk/Enum_3_DE516C6CF47482AF.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/UIWidgetGroup.h"

namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIWidgetController; }
namespace UnityEngine { class Transform; }

inline static constexpr unsigned int UIWidgetGroupT_1_TypeDefinitionIndex = 47299;

template <typename T>
class UIWidgetGroupT_1 : public ::UIWidgetGroup
{
public:
	::MoleMole::UIBaseController* _panel; // 0x0
	::Enum_3_DBF2701137F18AA6 _ctrlId; // 0x0
	::UnityEngine::Transform* _parent; // 0x0
	::Struct_2_575273D27F02957E _binderInfo; // 0x0
};
