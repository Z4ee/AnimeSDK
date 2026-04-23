#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueTournDifficulty; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE17_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11217C10)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE17_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11217C40)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE17_INVOKE_OFFSET UNITYSDK_OFFSET(0x112176B0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE17__CTOR_OFFSET UNITYSDK_OFFSET(0x11212D40)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE17_TypeDefinitionIndex = 46343;

	class InternalGlobals___GEN_DELEGATE17 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE17__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::RPG::Client::IRogueTournDifficulty* difficulty)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE17_INVOKE_OFFSET))(this, difficulty);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueTournDifficulty* difficulty, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueTournDifficulty*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE17_BEGININVOKE_OFFSET))(this, difficulty, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE17_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
