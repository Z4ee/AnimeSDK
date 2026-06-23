#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_RENDERING_UNIVERSAL_REDIRECTCOMPONENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1AF69EA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_REDIRECTCOMPONENT_CORRECTID_OFFSET UNITYSDK_OFFSET(0x1AF69810)
#define UNITYENGINE_RENDERING_UNIVERSAL_REDIRECTCOMPONENT_GENERATEID_OFFSET UNITYSDK_OFFSET(0x1AF69F30)
#define UNITYENGINE_RENDERING_UNIVERSAL_REDIRECTCOMPONENT_GET_ID_OFFSET UNITYSDK_OFFSET(0x1AF697B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_REDIRECTCOMPONENT_GET_OFFSET UNITYSDK_OFFSET(0x1AF69880)
#define UNITYENGINE_RENDERING_UNIVERSAL_REDIRECTCOMPONENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1AF69DF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_REDIRECTCOMPONENT_TRYADDTHIS_1_OFFSET UNITYSDK_OFFSET(0x1AF69D50)
#define UNITYENGINE_RENDERING_UNIVERSAL_REDIRECTCOMPONENT_TRYADDTHIS_OFFSET UNITYSDK_OFFSET(0x1AF69B20)
#define UNITYENGINE_RENDERING_UNIVERSAL_REDIRECTCOMPONENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF6A120)
#define UNITYENGINE_RENDERING_UNIVERSAL_REDIRECTCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF6A0C0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int RedirectComponent_TypeDefinitionIndex = 27251;

	class RedirectComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>*>** StaticGet_Map()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>*>**)Il2CppClass::FromTypeDefinitionIndex(RedirectComponent_TypeDefinitionIndex)->GetStaticField(0x20990);
		}
		::System::Int32 id; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_REDIRECTCOMPONENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_REDIRECTCOMPONENT__CCTOR_OFFSET))();
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_REDIRECTCOMPONENT_GET_ID_OFFSET))(this);
		}

		static ::UnityEngine::MonoBehaviour* Get(::System::Int32 id)
		{
			return ((::UnityEngine::MonoBehaviour*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_REDIRECTCOMPONENT_GET_OFFSET))(id);
		}

		::System::Void CorrectID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_REDIRECTCOMPONENT_CORRECTID_OFFSET))(this);
		}

		::System::Void TryAddThis()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_REDIRECTCOMPONENT_TRYADDTHIS_OFFSET))(this);
		}

		::System::Void TryAddThis_1(::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_REDIRECTCOMPONENT_TRYADDTHIS_1_OFFSET))(this, list);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_REDIRECTCOMPONENT_ONDESTROY_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_REDIRECTCOMPONENT_AWAKE_OFFSET))(this);
		}

		::System::Void GenerateID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_REDIRECTCOMPONENT_GENERATEID_OFFSET))(this);
		}
	};
}
