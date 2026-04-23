#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define UNITYENGINE_ASSETFILENAMEEXTENSIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4F3320)

namespace UnityEngine
{
	inline static constexpr unsigned int AssetFileNameExtensionAttribute_TypeDefinitionIndex = 3692;

	class AssetFileNameExtensionAttribute : public ::System::Attribute
	{
	public:
		::System::String* _preferredExtension_k__BackingField; // 0x10
		::System::Collections::Generic::IEnumerable_1<::System::String*>* _otherExtensions_k__BackingField; // 0x18

		::System::Void _ctor(::System::String* preferredExtension, ::Il2CppArray<::System::String*>* otherExtensions)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETFILENAMEEXTENSIONATTRIBUTE__CTOR_OFFSET))(this, preferredExtension, otherExtensions);
		}
	};
}
