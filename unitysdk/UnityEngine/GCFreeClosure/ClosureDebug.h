#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::GCFreeClosure { class IDebug; }

#define UNITYENGINE_GCFREECLOSURE_CLOSUREDEBUG_ASSERT_OFFSET UNITYSDK_OFFSET(0x18A0ADD0)
#define UNITYENGINE_GCFREECLOSURE_CLOSUREDEBUG_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x18A0ADA0)
#define UNITYENGINE_GCFREECLOSURE_CLOSUREDEBUG__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A0AEE0)
#define UNITYENGINE_GCFREECLOSURE_CLOSUREDEBUG__CTOR_OFFSET UNITYSDK_OFFSET(0x18A0AED0)

namespace UnityEngine::GCFreeClosure
{
	inline static constexpr unsigned int ClosureDebug_TypeDefinitionIndex = 4265;

	class ClosureDebug : public ::System::Object
	{
	public:
		static ::UnityEngine::GCFreeClosure::ClosureDebug** StaticGet__Default_k__BackingField()
		{
			return (::UnityEngine::GCFreeClosure::ClosureDebug**)Il2CppClass::FromTypeDefinitionIndex(ClosureDebug_TypeDefinitionIndex)->GetStaticField(0x129B0);
		}
		::UnityEngine::GCFreeClosure::IDebug* _debug; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_CLOSUREDEBUG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_CLOSUREDEBUG__CCTOR_OFFSET))();
		}

		static ::UnityEngine::GCFreeClosure::ClosureDebug* get_Default()
		{
			return ((::UnityEngine::GCFreeClosure::ClosureDebug*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_CLOSUREDEBUG_GET_DEFAULT_OFFSET))();
		}

		static ::System::Void Assert(::System::Boolean condition, ::System::String* msg)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_CLOSUREDEBUG_ASSERT_OFFSET))(condition, msg);
		}
	};
}
