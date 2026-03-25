#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define UNITYENGINE_GUISTATEOBJECTS_GETSTATEOBJECT_OFFSET UNITYSDK_OFFSET(0x18A7E680)
#define UNITYENGINE_GUISTATEOBJECTS__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A7E850)

namespace UnityEngine
{
	inline static constexpr unsigned int GUIStateObjects_TypeDefinitionIndex = 5121;

	class GUIStateObjects : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>** StaticGet_s_StateCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(GUIStateObjects_TypeDefinitionIndex)->GetStaticField(0x16050);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTATEOBJECTS__CCTOR_OFFSET))();
		}

		static ::System::Object* GetStateObject(::System::Type* t, ::System::Int32 controlID)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISTATEOBJECTS_GETSTATEOBJECT_OFFSET))(t, controlID);
		}
	};
}
