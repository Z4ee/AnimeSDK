#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define UNITYENGINE_SERIALIZATION_FORMERLYSERIALIZEDASATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A485080)

namespace UnityEngine::Serialization
{
	inline static constexpr unsigned int FormerlySerializedAsAttribute_TypeDefinitionIndex = 4308;

	class FormerlySerializedAsAttribute : public ::System::Attribute
	{
	public:
		::System::String* m_oldName; // 0x10

		::System::Void _ctor(::System::String* oldName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SERIALIZATION_FORMERLYSERIALIZEDASATTRIBUTE__CTOR_OFFSET))(this, oldName);
		}
	};
}
