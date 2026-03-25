#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/System/Numerics/BigInteger.h"

class Class_1_6E708EAB438EC183_66;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE53_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xFF5C440)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE53_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xFF5C470)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE53_INVOKE_OFFSET UNITYSDK_OFFSET(0xFF5BEB0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE53__CTOR_OFFSET UNITYSDK_OFFSET(0xFF49FF0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE53_TypeDefinitionIndex = 40470;

	class InternalGlobals___GEN_DELEGATE53 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE53__CTOR_OFFSET))(this, object, method);
		}

		::System::Numerics::BigInteger Invoke(::Class_1_6E708EAB438EC183_66* bigUint)
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID, ::Class_1_6E708EAB438EC183_66*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE53_INVOKE_OFFSET))(this, bigUint);
		}

		::System::IAsyncResult* BeginInvoke(::Class_1_6E708EAB438EC183_66* bigUint, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_1_6E708EAB438EC183_66*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE53_BEGININVOKE_OFFSET))(this, bigUint, callback, object);
		}

		::System::Numerics::BigInteger EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE53_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
