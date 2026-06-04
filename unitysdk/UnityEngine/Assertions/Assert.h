#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_ASSERTIONS_ASSERT_AREEQUAL_1_OFFSET UNITYSDK_OFFSET(0x1B27C520)
#define UNITYENGINE_ASSERTIONS_ASSERT_AREEQUAL_OFFSET UNITYSDK_OFFSET(0x1B27C180)
#define UNITYENGINE_ASSERTIONS_ASSERT_FAIL_OFFSET UNITYSDK_OFFSET(0x1B27BFC0)
#define UNITYENGINE_ASSERTIONS_ASSERT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B27C5D0)

namespace UnityEngine::Assertions
{
	inline static constexpr unsigned int Assert_TypeDefinitionIndex = 4930;

	class Assert : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_raiseExceptions()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assert_TypeDefinitionIndex)->GetStaticField(0x9D80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT__CCTOR_OFFSET))();
		}

		static ::System::Void Fail(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_FAIL_OFFSET))(a1, a2);
		}

		static ::System::Void AreEqual(::UnityEngine::Object* a1, ::UnityEngine::Object* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_AREEQUAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void AreEqual_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_AREEQUAL_1_OFFSET))(a1, a2);
		}
	};
}
