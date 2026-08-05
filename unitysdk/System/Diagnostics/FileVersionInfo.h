#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_APPENDFORMAT_OFFSET UNITYSDK_OFFSET(0x1E2856E0)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GETVERSIONINFO_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1E2855C0)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GETVERSIONINFO_OFFSET UNITYSDK_OFFSET(0x1E2855D0)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_COMMENTS_OFFSET UNITYSDK_OFFSET(0x1E285410)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_COMPANYNAME_OFFSET UNITYSDK_OFFSET(0x1E285420)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_FILEBUILDPART_OFFSET UNITYSDK_OFFSET(0x1E285430)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_FILEDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1E285440)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_FILEMAJORPART_OFFSET UNITYSDK_OFFSET(0x1E285450)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_FILEMINORPART_OFFSET UNITYSDK_OFFSET(0x1E285460)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1E285470)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_FILEPRIVATEPART_OFFSET UNITYSDK_OFFSET(0x1E285480)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_FILEVERSION_OFFSET UNITYSDK_OFFSET(0x1E285490)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_INTERNALNAME_OFFSET UNITYSDK_OFFSET(0x1E2854A0)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_ISDEBUG_OFFSET UNITYSDK_OFFSET(0x1E2854B0)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x1E2854C0)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_ISPRERELEASE_OFFSET UNITYSDK_OFFSET(0x1E2854D0)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_ISPRIVATEBUILD_OFFSET UNITYSDK_OFFSET(0x1E2854E0)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_ISSPECIALBUILD_OFFSET UNITYSDK_OFFSET(0x1E2854F0)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_LANGUAGE_OFFSET UNITYSDK_OFFSET(0x1E285500)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_LEGALCOPYRIGHT_OFFSET UNITYSDK_OFFSET(0x1E285510)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_LEGALTRADEMARKS_OFFSET UNITYSDK_OFFSET(0x1E285520)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_ORIGINALFILENAME_OFFSET UNITYSDK_OFFSET(0x1E285530)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_PRIVATEBUILD_OFFSET UNITYSDK_OFFSET(0x1E285540)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_PRODUCTBUILDPART_OFFSET UNITYSDK_OFFSET(0x1E285550)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_PRODUCTMAJORPART_OFFSET UNITYSDK_OFFSET(0x1E285560)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_PRODUCTMINORPART_OFFSET UNITYSDK_OFFSET(0x1E285570)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_PRODUCTNAME_OFFSET UNITYSDK_OFFSET(0x1E285580)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_PRODUCTPRIVATEPART_OFFSET UNITYSDK_OFFSET(0x1E285590)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_PRODUCTVERSION_OFFSET UNITYSDK_OFFSET(0x1E2855A0)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_SPECIALBUILD_OFFSET UNITYSDK_OFFSET(0x1E2855B0)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E285700)
#define SYSTEM_DIAGNOSTICS_FILEVERSIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2853D0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int FileVersionInfo_TypeDefinitionIndex = 2794;

	class FileVersionInfo : public ::System::Object
	{
	public:
		::System::String* specialbuild; // 0x10
		::System::String* fileversion; // 0x18
		::System::String* filedescription; // 0x20
		::System::String* comments; // 0x28
		::System::String* filename; // 0x30
		::System::String* privatebuild; // 0x38
		::System::String* originalfilename; // 0x40
		::System::String* productname; // 0x48
		::System::String* companyname; // 0x50
		::System::String* legalcopyright; // 0x58
		::System::String* internalname; // 0x60
		::System::String* productversion; // 0x68
		::System::String* legaltrademarks; // 0x70
		::System::String* language; // 0x78
		::System::Int32 fileprivatepart; // 0x80
		::System::Boolean ispatched; // 0x84
		::System::Int32 productprivatepart; // 0x88
		::System::Int32 productbuildpart; // 0x8C
		::System::Int32 filebuildpart; // 0x90
		::System::Int32 fileminorpart; // 0x94
		::System::Int32 filemajorpart; // 0x98
		::System::Int32 productminorpart; // 0x9C
		::System::Int32 productmajorpart; // 0xA0
		::System::Boolean isspecialbuild; // 0xA4
		::System::Boolean isprivatebuild; // 0xA5
		::System::Boolean isdebug; // 0xA6
		::System::Boolean isprerelease; // 0xA7

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO__CTOR_OFFSET))(this);
		}

		::System::String* get_Comments()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_COMMENTS_OFFSET))(this);
		}

		::System::String* get_CompanyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_COMPANYNAME_OFFSET))(this);
		}

		::System::Int32 get_FileBuildPart()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_FILEBUILDPART_OFFSET))(this);
		}

		::System::String* get_FileDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_FILEDESCRIPTION_OFFSET))(this);
		}

		::System::Int32 get_FileMajorPart()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_FILEMAJORPART_OFFSET))(this);
		}

		::System::Int32 get_FileMinorPart()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_FILEMINORPART_OFFSET))(this);
		}

		::System::String* get_FileName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_FILENAME_OFFSET))(this);
		}

		::System::Int32 get_FilePrivatePart()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_FILEPRIVATEPART_OFFSET))(this);
		}

		::System::String* get_FileVersion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_FILEVERSION_OFFSET))(this);
		}

		::System::String* get_InternalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_INTERNALNAME_OFFSET))(this);
		}

		::System::Boolean get_IsDebug()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_ISDEBUG_OFFSET))(this);
		}

		::System::Boolean get_IsPatched()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_ISPATCHED_OFFSET))(this);
		}

		::System::Boolean get_IsPreRelease()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_ISPRERELEASE_OFFSET))(this);
		}

		::System::Boolean get_IsPrivateBuild()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_ISPRIVATEBUILD_OFFSET))(this);
		}

		::System::Boolean get_IsSpecialBuild()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_ISSPECIALBUILD_OFFSET))(this);
		}

		::System::String* get_Language()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_LANGUAGE_OFFSET))(this);
		}

		::System::String* get_LegalCopyright()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_LEGALCOPYRIGHT_OFFSET))(this);
		}

		::System::String* get_LegalTrademarks()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_LEGALTRADEMARKS_OFFSET))(this);
		}

		::System::String* get_OriginalFilename()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_ORIGINALFILENAME_OFFSET))(this);
		}

		::System::String* get_PrivateBuild()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_PRIVATEBUILD_OFFSET))(this);
		}

		::System::Int32 get_ProductBuildPart()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_PRODUCTBUILDPART_OFFSET))(this);
		}

		::System::Int32 get_ProductMajorPart()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_PRODUCTMAJORPART_OFFSET))(this);
		}

		::System::Int32 get_ProductMinorPart()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_PRODUCTMINORPART_OFFSET))(this);
		}

		::System::String* get_ProductName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_PRODUCTNAME_OFFSET))(this);
		}

		::System::Int32 get_ProductPrivatePart()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_PRODUCTPRIVATEPART_OFFSET))(this);
		}

		::System::String* get_ProductVersion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_PRODUCTVERSION_OFFSET))(this);
		}

		::System::String* get_SpecialBuild()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GET_SPECIALBUILD_OFFSET))(this);
		}

		::System::Void GetVersionInfo_internal(::System::String* fileName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GETVERSIONINFO_INTERNAL_OFFSET))(this, fileName);
		}

		static ::System::Diagnostics::FileVersionInfo* GetVersionInfo(::System::String* fileName)
		{
			return ((::System::Diagnostics::FileVersionInfo*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_GETVERSIONINFO_OFFSET))(fileName);
		}

		static ::System::Void AppendFormat(::System::Text::StringBuilder* sb, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_APPENDFORMAT_OFFSET))(sb, format, args);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_FILEVERSIONINFO_TOSTRING_OFFSET))(this);
		}
	};
}
