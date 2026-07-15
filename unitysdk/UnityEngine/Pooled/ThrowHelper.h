#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Pooled/ExceptionArgument.h"
#include "unitysdk/UnityEngine/Pooled/ExceptionResource.h"

namespace System { class ArgumentException; }
namespace System { class ArgumentNullException; }
namespace System { class ArgumentOutOfRangeException; }
namespace System { class String; }
namespace System { class Type; }

#define UNITYENGINE_POOLED_THROWHELPER_GETARGUMENTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1D120CF0)
#define UNITYENGINE_POOLED_THROWHELPER_GETARGUMENTNAME_OFFSET UNITYSDK_OFFSET(0x1D120E30)
#define UNITYENGINE_POOLED_THROWHELPER_GETARGUMENTNULLEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1D120D70)
#define UNITYENGINE_POOLED_THROWHELPER_GETARGUMENTOUTOFRANGEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1D120C20)
#define UNITYENGINE_POOLED_THROWHELPER_GETRESOURCESTRING_OFFSET UNITYSDK_OFFSET(0x1D121410)
#define UNITYENGINE_POOLED_THROWHELPER_GETWRONGVALUETYPEARGUMENTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1D121770)
#define UNITYENGINE_POOLED_THROWHELPER_THROWARGUMENTEXCEPTION_ARGUMENT_INVALIDARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x1D121320)
#define UNITYENGINE_POOLED_THROWHELPER_THROWARGUMENTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1D120CB0)
#define UNITYENGINE_POOLED_THROWHELPER_THROWARGUMENTNULLEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1D1212A0)
#define UNITYENGINE_POOLED_THROWHELPER_THROWARGUMENTOUTOFRANGEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1D1212E0)
#define UNITYENGINE_POOLED_THROWHELPER_THROWARGUMENTOUTOFRANGE_INDEXEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1D120BE0)
#define UNITYENGINE_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_INVALIDOPERATION_ENUMFAILEDVERSION_OFFSET UNITYSDK_OFFSET(0x1D121370)
#define UNITYENGINE_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_INVALIDOPERATION_ENUMOPCANTHAPPEN_OFFSET UNITYSDK_OFFSET(0x1D1213C0)

namespace UnityEngine::Pooled
{
	inline static constexpr unsigned int ThrowHelper_TypeDefinitionIndex = 4522;

	class ThrowHelper : public ::System::Object
	{
	public:
		static ::System::Void ThrowArgumentOutOfRange_IndexException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_POOLED_THROWHELPER_THROWARGUMENTOUTOFRANGE_INDEXEXCEPTION_OFFSET))();
		}

		static ::System::Void ThrowArgumentException(::UnityEngine::Pooled::ExceptionResource a1)
		{
			return ((::System::Void(*)(::UnityEngine::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + UNITYENGINE_POOLED_THROWHELPER_THROWARGUMENTEXCEPTION_OFFSET))(a1);
		}

		static ::System::ArgumentNullException* GetArgumentNullException(::UnityEngine::Pooled::ExceptionArgument a1)
		{
			return ((::System::ArgumentNullException*(*)(::UnityEngine::Pooled::ExceptionArgument))((::PBYTE)hIl2Cpp + UNITYENGINE_POOLED_THROWHELPER_GETARGUMENTNULLEXCEPTION_OFFSET))(a1);
		}

		static ::System::Void ThrowArgumentNullException(::UnityEngine::Pooled::ExceptionArgument a1)
		{
			return ((::System::Void(*)(::UnityEngine::Pooled::ExceptionArgument))((::PBYTE)hIl2Cpp + UNITYENGINE_POOLED_THROWHELPER_THROWARGUMENTNULLEXCEPTION_OFFSET))(a1);
		}

		static ::System::Void ThrowArgumentOutOfRangeException(::UnityEngine::Pooled::ExceptionArgument a1, ::UnityEngine::Pooled::ExceptionResource a2)
		{
			return ((::System::Void(*)(::UnityEngine::Pooled::ExceptionArgument, ::UnityEngine::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + UNITYENGINE_POOLED_THROWHELPER_THROWARGUMENTOUTOFRANGEEXCEPTION_OFFSET))(a1, a2);
		}

		static ::System::Void ThrowArgumentException_Argument_InvalidArrayType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_POOLED_THROWHELPER_THROWARGUMENTEXCEPTION_ARGUMENT_INVALIDARRAYTYPE_OFFSET))();
		}

		static ::System::Void ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_INVALIDOPERATION_ENUMFAILEDVERSION_OFFSET))();
		}

		static ::System::Void ThrowInvalidOperationException_InvalidOperation_EnumOpCantHappen()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_INVALIDOPERATION_ENUMOPCANTHAPPEN_OFFSET))();
		}

		static ::System::ArgumentException* GetArgumentException(::UnityEngine::Pooled::ExceptionResource a1)
		{
			return ((::System::ArgumentException*(*)(::UnityEngine::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + UNITYENGINE_POOLED_THROWHELPER_GETARGUMENTEXCEPTION_OFFSET))(a1);
		}

		static ::System::ArgumentException* GetWrongValueTypeArgumentException(::System::Object* a1, ::System::Type* a2)
		{
			return ((::System::ArgumentException*(*)(::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_POOLED_THROWHELPER_GETWRONGVALUETYPEARGUMENTEXCEPTION_OFFSET))(a1, a2);
		}

		static ::System::ArgumentOutOfRangeException* GetArgumentOutOfRangeException(::UnityEngine::Pooled::ExceptionArgument a1, ::UnityEngine::Pooled::ExceptionResource a2)
		{
			return ((::System::ArgumentOutOfRangeException*(*)(::UnityEngine::Pooled::ExceptionArgument, ::UnityEngine::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + UNITYENGINE_POOLED_THROWHELPER_GETARGUMENTOUTOFRANGEEXCEPTION_OFFSET))(a1, a2);
		}

		static ::System::String* GetArgumentName(::UnityEngine::Pooled::ExceptionArgument a1)
		{
			return ((::System::String*(*)(::UnityEngine::Pooled::ExceptionArgument))((::PBYTE)hIl2Cpp + UNITYENGINE_POOLED_THROWHELPER_GETARGUMENTNAME_OFFSET))(a1);
		}

		static ::System::String* GetResourceString(::UnityEngine::Pooled::ExceptionResource a1)
		{
			return ((::System::String*(*)(::UnityEngine::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + UNITYENGINE_POOLED_THROWHELPER_GETRESOURCESTRING_OFFSET))(a1);
		}
	};
}
