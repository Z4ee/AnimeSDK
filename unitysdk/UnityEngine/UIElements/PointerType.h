#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_UIELEMENTS_POINTERTYPE_GETPOINTERTYPE_OFFSET UNITYSDK_OFFSET(0x18ADBD70)
#define UNITYENGINE_UIELEMENTS_POINTERTYPE_ISDIRECTMANIPULATIONDEVICE_OFFSET UNITYSDK_OFFSET(0x18AD8CA0)
#define UNITYENGINE_UIELEMENTS_POINTERTYPE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18ADBE10)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerType_TypeDefinitionIndex = 5941;

	class PointerType : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_unknown()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PointerType_TypeDefinitionIndex)->GetStaticField(0x7B30);
		}
		static ::System::String** StaticGet_mouse()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PointerType_TypeDefinitionIndex)->GetStaticField(0x7B38);
		}
		static ::System::String** StaticGet_pen()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PointerType_TypeDefinitionIndex)->GetStaticField(0x7B40);
		}
		static ::System::String** StaticGet_touch()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PointerType_TypeDefinitionIndex)->GetStaticField(0x7B48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERTYPE__CCTOR_OFFSET))();
		}

		static ::System::String* GetPointerType(::System::Int32 pointerId)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERTYPE_GETPOINTERTYPE_OFFSET))(pointerId);
		}

		static ::System::Boolean IsDirectManipulationDevice(::System::String* pointerType)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERTYPE_ISDIRECTMANIPULATIONDEVICE_OFFSET))(pointerType);
		}
	};
}
