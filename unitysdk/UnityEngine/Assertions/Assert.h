#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_ASSERTIONS_ASSERT_AREEQUAL_1_OFFSET UNITYSDK_OFFSET(0x189F0710)
#define UNITYENGINE_ASSERTIONS_ASSERT_AREEQUAL_OFFSET UNITYSDK_OFFSET(0x189F02E0)
#define UNITYENGINE_ASSERTIONS_ASSERT_FAIL_OFFSET UNITYSDK_OFFSET(0x189F0120)
#define UNITYENGINE_ASSERTIONS_ASSERT__CCTOR_OFFSET UNITYSDK_OFFSET(0x189F07C0)

namespace UnityEngine::Assertions
{
	inline static constexpr unsigned int Assert_TypeDefinitionIndex = 4748;

	class Assert : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_raiseExceptions()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assert_TypeDefinitionIndex)->GetStaticField(0x5600);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT__CCTOR_OFFSET))();
		}

		static ::System::Void Fail(::System::String* message, ::System::String* userMessage)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_FAIL_OFFSET))(message, userMessage);
		}

		static ::System::Void AreEqual(::UnityEngine::Object* expected, ::UnityEngine::Object* actual, ::System::String* message)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_AREEQUAL_OFFSET))(expected, actual, message);
		}

		static ::System::Void AreEqual_1(::System::Int32 expected, ::System::Int32 actual)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_AREEQUAL_1_OFFSET))(expected, actual);
		}
	};
}
