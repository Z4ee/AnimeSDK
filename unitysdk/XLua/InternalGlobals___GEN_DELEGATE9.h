#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueMiracleInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE9_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xFF5FDB0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE9_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xFF5FE10)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE9_INVOKE_OFFSET UNITYSDK_OFFSET(0xFF5F850)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE9__CTOR_OFFSET UNITYSDK_OFFSET(0xFF49A70)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE9_TypeDefinitionIndex = 40426;

	class InternalGlobals___GEN_DELEGATE9 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE9__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::RPG::Client::IRogueMiracleInfo* miracleInfo, ::System::UInt32 miracleID)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueMiracleInfo*, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE9_INVOKE_OFFSET))(this, miracleInfo, miracleID);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueMiracleInfo* miracleInfo, ::System::UInt32 miracleID, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueMiracleInfo*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE9_BEGININVOKE_OFFSET))(this, miracleInfo, miracleID, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE9_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
