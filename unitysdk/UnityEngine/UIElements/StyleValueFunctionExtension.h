#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UIElements/StyleValueFunction.h"

namespace System { class String; }

#define UNITYENGINE_UIELEMENTS_STYLEVALUEFUNCTIONEXTENSION_TOUSSSTRING_OFFSET UNITYSDK_OFFSET(0x1BBF26A0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleValueFunctionExtension_TypeDefinitionIndex = 27604;

	class StyleValueFunctionExtension : public ::System::Object
	{
	public:
		static ::System::String* ToUssString(::UnityEngine::UIElements::StyleValueFunction svf)
		{
			return ((::System::String*(*)(::UnityEngine::UIElements::StyleValueFunction))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEVALUEFUNCTIONEXTENSION_TOUSSSTRING_OFFSET))(svf);
		}
	};
}
