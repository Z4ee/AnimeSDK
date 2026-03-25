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

#define UNITYENGINE_POOLED_THROWHELPER_GETARGUMENTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x18A2D360)
#define UNITYENGINE_POOLED_THROWHELPER_GETARGUMENTNAME_OFFSET UNITYSDK_OFFSET(0x18A2D4A0)
#define UNITYENGINE_POOLED_THROWHELPER_GETARGUMENTNULLEXCEPTION_OFFSET UNITYSDK_OFFSET(0x18A2D3E0)
#define UNITYENGINE_POOLED_THROWHELPER_GETARGUMENTOUTOFRANGEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x18A2D290)
#define UNITYENGINE_POOLED_THROWHELPER_GETRESOURCESTRING_OFFSET UNITYSDK_OFFSET(0x18A2DA90)
#define UNITYENGINE_POOLED_THROWHELPER_GETWRONGVALUETYPEARGUMENTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x18A2DDB0)
#define UNITYENGINE_POOLED_THROWHELPER_THROWARGUMENTEXCEPTION_ARGUMENT_INVALIDARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x18A2D9A0)
#define UNITYENGINE_POOLED_THROWHELPER_THROWARGUMENTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x18A2D320)
#define UNITYENGINE_POOLED_THROWHELPER_THROWARGUMENTNULLEXCEPTION_OFFSET UNITYSDK_OFFSET(0x18A2D920)
#define UNITYENGINE_POOLED_THROWHELPER_THROWARGUMENTOUTOFRANGEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x18A2D960)
#define UNITYENGINE_POOLED_THROWHELPER_THROWARGUMENTOUTOFRANGE_INDEXEXCEPTION_OFFSET UNITYSDK_OFFSET(0x18A2D250)
#define UNITYENGINE_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_INVALIDOPERATION_ENUMFAILEDVERSION_OFFSET UNITYSDK_OFFSET(0x18A2D9F0)
#define UNITYENGINE_POOLED_THROWHELPER_THROWINVALIDOPERATIONEXCEPTION_INVALIDOPERATION_ENUMOPCANTHAPPEN_OFFSET UNITYSDK_OFFSET(0x18A2DA40)

namespace UnityEngine::Pooled
{
	inline static constexpr unsigned int ThrowHelper_TypeDefinitionIndex = 4341;

	class ThrowHelper : public ::System::Object
	{
	public:
		static ::System::Void ThrowArgumentOutOfRange_IndexException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_POOLED_THROWHELPER_THROWARGUMENTOUTOFRANGE_INDEXEXCEPTION_OFFSET))();
		}

		static ::System::Void ThrowArgumentException(::UnityEngine::Pooled::ExceptionResource resource)
		{
			return ((::System::Void(*)(::UnityEngine::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + UNITYENGINE_POOLED_THROWHELPER_THROWARGUMENTEXCEPTION_OFFSET))(resource);
		}

		static ::System::ArgumentNullException* GetArgumentNullException(::UnityEngine::Pooled::ExceptionArgument argument)
		{
			return ((::System::ArgumentNullException*(*)(::UnityEngine::Pooled::ExceptionArgument))((::PBYTE)hIl2Cpp + UNITYENGINE_POOLED_THROWHELPER_GETARGUMENTNULLEXCEPTION_OFFSET))(argument);
		}

		static ::System::Void ThrowArgumentNullException(::UnityEngine::Pooled::ExceptionArgument argument)
		{
			return ((::System::Void(*)(::UnityEngine::Pooled::ExceptionArgument))((::PBYTE)hIl2Cpp + UNITYENGINE_POOLED_THROWHELPER_THROWARGUMENTNULLEXCEPTION_OFFSET))(argument);
		}

		static ::System::Void ThrowArgumentOutOfRangeException(::UnityEngine::Pooled::ExceptionArgument argument, ::UnityEngine::Pooled::ExceptionResource resource)
		{
			return ((::System::Void(*)(::UnityEngine::Pooled::ExceptionArgument, ::UnityEngine::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + UNITYENGINE_POOLED_THROWHELPER_THROWARGUMENTOUTOFRANGEEXCEPTION_OFFSET))(argument, resource);
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

		static ::System::ArgumentException* GetArgumentException(::UnityEngine::Pooled::ExceptionResource resource)
		{
			return ((::System::ArgumentException*(*)(::UnityEngine::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + UNITYENGINE_POOLED_THROWHELPER_GETARGUMENTEXCEPTION_OFFSET))(resource);
		}

		static ::System::ArgumentException* GetWrongValueTypeArgumentException(::System::Object* value, ::System::Type* targetType)
		{
			return ((::System::ArgumentException*(*)(::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_POOLED_THROWHELPER_GETWRONGVALUETYPEARGUMENTEXCEPTION_OFFSET))(value, targetType);
		}

		static ::System::ArgumentOutOfRangeException* GetArgumentOutOfRangeException(::UnityEngine::Pooled::ExceptionArgument argument, ::UnityEngine::Pooled::ExceptionResource resource)
		{
			return ((::System::ArgumentOutOfRangeException*(*)(::UnityEngine::Pooled::ExceptionArgument, ::UnityEngine::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + UNITYENGINE_POOLED_THROWHELPER_GETARGUMENTOUTOFRANGEEXCEPTION_OFFSET))(argument, resource);
		}

		static ::System::String* GetArgumentName(::UnityEngine::Pooled::ExceptionArgument argument)
		{
			return ((::System::String*(*)(::UnityEngine::Pooled::ExceptionArgument))((::PBYTE)hIl2Cpp + UNITYENGINE_POOLED_THROWHELPER_GETARGUMENTNAME_OFFSET))(argument);
		}

		static ::System::String* GetResourceString(::UnityEngine::Pooled::ExceptionResource resource)
		{
			return ((::System::String*(*)(::UnityEngine::Pooled::ExceptionResource))((::PBYTE)hIl2Cpp + UNITYENGINE_POOLED_THROWHELPER_GETRESOURCESTRING_OFFSET))(resource);
		}
	};
}
