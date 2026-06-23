#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/LicenseContext.h"

namespace System { class String; }
namespace System { class Type; }
namespace System { class Uri; }
namespace System::Collections { class Hashtable; }
namespace System::Diagnostics { class TraceSwitch; }
namespace System::IO { class Stream; }
namespace System::Reflection { class Assembly; }

#define SYSTEM_COMPONENTMODEL_DESIGN_RUNTIMELICENSECONTEXT_CASEINSENSITIVEMANIFESTRESOURCESTREAMLOOKUP_OFFSET UNITYSDK_OFFSET(0x1D455700)
#define SYSTEM_COMPONENTMODEL_DESIGN_RUNTIMELICENSECONTEXT_GETLOCALPATH_OFFSET UNITYSDK_OFFSET(0x1D454AD0)
#define SYSTEM_COMPONENTMODEL_DESIGN_RUNTIMELICENSECONTEXT_GETSAVEDLICENSEKEY_OFFSET UNITYSDK_OFFSET(0x1D454C10)
#define SYSTEM_COMPONENTMODEL_DESIGN_RUNTIMELICENSECONTEXT_OPENREAD_OFFSET UNITYSDK_OFFSET(0x1D4558B0)
#define SYSTEM_COMPONENTMODEL_DESIGN_RUNTIMELICENSECONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D455A10)
#define SYSTEM_COMPONENTMODEL_DESIGN_RUNTIMELICENSECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D455A00)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int RuntimeLicenseContext_TypeDefinitionIndex = 3053;

	class RuntimeLicenseContext : public ::System::ComponentModel::LicenseContext
	{
	public:
		static ::System::Diagnostics::TraceSwitch** StaticGet_RuntimeLicenseContextSwitch()
		{
			return (::System::Diagnostics::TraceSwitch**)Il2CppClass::FromTypeDefinitionIndex(RuntimeLicenseContext_TypeDefinitionIndex)->GetStaticField(0x3170);
		}
		// static const ::System::Int32 ReadBlock = 0x190; // 0x0
		::System::Collections::Hashtable* savedLicenseKeys; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_RUNTIMELICENSECONTEXT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_RUNTIMELICENSECONTEXT__CCTOR_OFFSET))();
		}

		::System::String* GetLocalPath(::System::String* fileName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_RUNTIMELICENSECONTEXT_GETLOCALPATH_OFFSET))(this, fileName);
		}

		::System::String* GetSavedLicenseKey(::System::Type* type, ::System::Reflection::Assembly* resourceAssembly)
		{
			return ((::System::String*(*)(::PVOID, ::System::Type*, ::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_RUNTIMELICENSECONTEXT_GETSAVEDLICENSEKEY_OFFSET))(this, type, resourceAssembly);
		}

		::System::IO::Stream* CaseInsensitiveManifestResourceStreamLookup(::System::Reflection::Assembly* satellite, ::System::String* name)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::Reflection::Assembly*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_RUNTIMELICENSECONTEXT_CASEINSENSITIVEMANIFESTRESOURCESTREAMLOOKUP_OFFSET))(this, satellite, name);
		}

		static ::System::IO::Stream* OpenRead(::System::Uri* resourceUri)
		{
			return ((::System::IO::Stream*(*)(::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_RUNTIMELICENSECONTEXT_OPENREAD_OFFSET))(resourceUri);
		}
	};
}
