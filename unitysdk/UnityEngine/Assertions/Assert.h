#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_ASSERTIONS_ASSERT_AREEQUAL_1_OFFSET UNITYSDK_OFFSET(0x1D66B7C0)
#define UNITYENGINE_ASSERTIONS_ASSERT_AREEQUAL_OFFSET UNITYSDK_OFFSET(0x1D66B2D0)
#define UNITYENGINE_ASSERTIONS_ASSERT_FAIL_OFFSET UNITYSDK_OFFSET(0x1D66AD40)
#define UNITYENGINE_ASSERTIONS_ASSERT_ISFALSE_1_OFFSET UNITYSDK_OFFSET(0x1D66B1C0)
#define UNITYENGINE_ASSERTIONS_ASSERT_ISFALSE_OFFSET UNITYSDK_OFFSET(0x1D66B060)
#define UNITYENGINE_ASSERTIONS_ASSERT_ISNOTNULL_OFFSET UNITYSDK_OFFSET(0x1D66B560)
#define UNITYENGINE_ASSERTIONS_ASSERT_ISTRUE_1_OFFSET UNITYSDK_OFFSET(0x1D66AF70)
#define UNITYENGINE_ASSERTIONS_ASSERT_ISTRUE_OFFSET UNITYSDK_OFFSET(0x1D66AE20)
#define UNITYENGINE_ASSERTIONS_ASSERT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D66B820)

namespace UnityEngine::Assertions
{
	inline static constexpr unsigned int Assert_TypeDefinitionIndex = 6350;

	class Assert : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_raiseExceptions()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assert_TypeDefinitionIndex)->GetStaticField(0x2E90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT__CCTOR_OFFSET))();
		}

		static ::System::Void Fail(::System::String* message, ::System::String* userMessage)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_FAIL_OFFSET))(message, userMessage);
		}

		static ::System::Void IsTrue(::System::Boolean condition)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_ISTRUE_OFFSET))(condition);
		}

		static ::System::Void IsTrue_1(::System::Boolean condition, ::System::String* message)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_ISTRUE_1_OFFSET))(condition, message);
		}

		static ::System::Void IsFalse(::System::Boolean condition)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_ISFALSE_OFFSET))(condition);
		}

		static ::System::Void IsFalse_1(::System::Boolean condition, ::System::String* message)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_ISFALSE_1_OFFSET))(condition, message);
		}

		static ::System::Void AreEqual(::UnityEngine::Object* expected, ::UnityEngine::Object* actual, ::System::String* message)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_AREEQUAL_OFFSET))(expected, actual, message);
		}

		static ::System::Void IsNotNull(::UnityEngine::Object* value, ::System::String* message)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_ISNOTNULL_OFFSET))(value, message);
		}

		static ::System::Void AreEqual_1(::System::Int32 expected, ::System::Int32 actual)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_AREEQUAL_1_OFFSET))(expected, actual);
		}
	};
}
