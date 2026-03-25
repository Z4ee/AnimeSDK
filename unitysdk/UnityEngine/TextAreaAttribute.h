#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define UNITYENGINE_TEXTAREAATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18A53990)
#define UNITYENGINE_TEXTAREAATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18A53980)

namespace UnityEngine
{
	inline static constexpr unsigned int TextAreaAttribute_TypeDefinitionIndex = 4051;

	class TextAreaAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Int32 minLines; // 0x10
		::System::Int32 maxLines; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTAREAATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 minLines, ::System::Int32 maxLines)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTAREAATTRIBUTE__CTOR_1_OFFSET))(this, minLines, maxLines);
		}
	};
}
