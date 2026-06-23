#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5F32457E56C42566.h"
#include "unitysdk/Enum_3_7A4252233BCEB3A9.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/UIWidgetGroup.h"

namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIWidgetController; }
namespace UnityEngine { class Transform; }

inline static constexpr unsigned int UIWidgetGroupT_1_TypeDefinitionIndex = 68439;

template <typename T>
class UIWidgetGroupT_1 : public ::UIWidgetGroup
{
public:
	::MoleMole::UIBaseController* _panel; // 0x0
	::Enum_3_7A4252233BCEB3A9 _ctrlId; // 0x0
	::UnityEngine::Transform* _parent; // 0x0
	::Struct_2_575273D27F02957E _binderInfo; // 0x0
};
