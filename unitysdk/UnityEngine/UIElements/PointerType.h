#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_UIELEMENTS_POINTERTYPE_GETPOINTERTYPE_OFFSET UNITYSDK_OFFSET(0x1B362C30)
#define UNITYENGINE_UIELEMENTS_POINTERTYPE_ISDIRECTMANIPULATIONDEVICE_OFFSET UNITYSDK_OFFSET(0x1B35FEB0)
#define UNITYENGINE_UIELEMENTS_POINTERTYPE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B362CD0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerType_TypeDefinitionIndex = 6230;

	class PointerType : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_pen()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PointerType_TypeDefinitionIndex)->GetStaticField(0x26F0);
		}
		static ::System::String** StaticGet_mouse()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PointerType_TypeDefinitionIndex)->GetStaticField(0x26F8);
		}
		static ::System::String** StaticGet_unknown()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PointerType_TypeDefinitionIndex)->GetStaticField(0x2700);
		}
		static ::System::String** StaticGet_touch()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PointerType_TypeDefinitionIndex)->GetStaticField(0x2708);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERTYPE__CCTOR_OFFSET))();
		}

		static ::System::String* GetPointerType(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERTYPE_GETPOINTERTYPE_OFFSET))(a1);
		}

		static ::System::Boolean IsDirectManipulationDevice(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERTYPE_ISDIRECTMANIPULATIONDEVICE_OFFSET))(a1);
		}
	};
}
