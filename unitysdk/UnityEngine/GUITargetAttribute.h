#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System { class Type; }

#define UNITYENGINE_GUITARGETATTRIBUTE_GETGUITARGETATTRVALUE_OFFSET UNITYSDK_OFFSET(0x1D0F9D90)
#define UNITYENGINE_GUITARGETATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0F9D80)

namespace UnityEngine
{
	inline static constexpr unsigned int GUITargetAttribute_TypeDefinitionIndex = 6422;

	class GUITargetAttribute : public ::System::Attribute
	{
	public:
		::System::Int32 displayMask; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUITARGETATTRIBUTE__CTOR_OFFSET))(this);
		}

		static ::System::Int32 GetGUITargetAttrValue(::System::Type* klass, ::System::String* methodName)
		{
			return ((::System::Int32(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUITARGETATTRIBUTE_GETGUITARGETATTRVALUE_OFFSET))(klass, methodName);
		}
	};
}
