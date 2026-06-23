#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Timeline/KFrameFieldType.h"

namespace System { class String; }
namespace System { class Type; }

#define UNITYENGINE_TIMELINE_PROPERTYCONSTANT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DB90B90)
#define UNITYENGINE_TIMELINE_PROPERTYCONSTANT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB90B20)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int PropertyConstant_TypeDefinitionIndex = 32292;

	class PropertyConstant : public ::System::Object
	{
	public:
		::System::String* propertyName; // 0x10
		::System::String* typeName; // 0x18
		::UnityEngine::Timeline::KFrameFieldType KFrameFieldType; // 0x20
		::System::Single value; // 0x24

		::System::Void _ctor(::System::Type* editorType, ::System::String* propertyName, ::UnityEngine::Timeline::KFrameFieldType fieldType, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*, ::UnityEngine::Timeline::KFrameFieldType, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PROPERTYCONSTANT__CTOR_OFFSET))(this, editorType, propertyName, fieldType, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_PROPERTYCONSTANT_TOSTRING_OFFSET))(this);
		}
	};
}
