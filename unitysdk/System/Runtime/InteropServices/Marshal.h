#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class Delegate; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Security { class SecureString; }

#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_ALLOCCOTASKMEM_OFFSET UNITYSDK_OFFSET(0x1954D800)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_ALLOCHGLOBAL_1_OFFSET UNITYSDK_OFFSET(0x1954D820)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_ALLOCHGLOBAL_OFFSET UNITYSDK_OFFSET(0x1954D810)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_BUFFERTOBSTR_OFFSET UNITYSDK_OFFSET(0x1954E260)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_CLEARBSTR_OFFSET UNITYSDK_OFFSET(0x1954D9B0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_CLEARUNICODE_OFFSET UNITYSDK_OFFSET(0x1954DB20)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_COPY_1_OFFSET UNITYSDK_OFFSET(0x1954D8C0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_COPY_2_OFFSET UNITYSDK_OFFSET(0x1954D8F0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_COPY_3_OFFSET UNITYSDK_OFFSET(0x1954D920)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_COPY_4_OFFSET UNITYSDK_OFFSET(0x1954D950)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_COPY_FROM_UNMANAGED_OFFSET UNITYSDK_OFFSET(0x1954D860)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_COPY_OFFSET UNITYSDK_OFFSET(0x1954D890)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_COPY_TO_UNMANAGED_OFFSET UNITYSDK_OFFSET(0x1954D830)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_FREEBSTR_OFFSET UNITYSDK_OFFSET(0x1954D980)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_FREECOTASKMEM_OFFSET UNITYSDK_OFFSET(0x1954D990)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_FREEHGLOBAL_OFFSET UNITYSDK_OFFSET(0x1954D9A0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_GETDELEGATEFORFUNCTIONPOINTERINTERNAL_OFFSET UNITYSDK_OFFSET(0x1954EA50)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_GETDELEGATEFORFUNCTIONPOINTER_OFFSET UNITYSDK_OFFSET(0x1954EA80)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_GETFUNCTIONPOINTERFORDELEGATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1954EC30)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_GETLASTWIN32ERROR_OFFSET UNITYSDK_OFFSET(0x1954DCC0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_OFFSETOF_OFFSET UNITYSDK_OFFSET(0x1954DD10)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_PTRTOSTRINGANSI_OFFSET UNITYSDK_OFFSET(0x1954DD20)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_PTRTOSTRINGBSTR_OFFSET UNITYSDK_OFFSET(0x1954DE90)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_PTRTOSTRINGUNI_1_OFFSET UNITYSDK_OFFSET(0x1954DDF0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_PTRTOSTRINGUNI_OFFSET UNITYSDK_OFFSET(0x1954DD50)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_PTRTOSTRUCTURE_1_OFFSET UNITYSDK_OFFSET(0x1954DF50)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_PTRTOSTRUCTURE_OFFSET UNITYSDK_OFFSET(0x1954DF40)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_READBYTE_1_OFFSET UNITYSDK_OFFSET(0x1954DF70)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_READBYTE_OFFSET UNITYSDK_OFFSET(0x1954DF60)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_READINT16_OFFSET UNITYSDK_OFFSET(0x1954DBF0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_READINT32_1_OFFSET UNITYSDK_OFFSET(0x1954DA40)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_READINT32_OFFSET UNITYSDK_OFFSET(0x1954DF80)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_READINT64_OFFSET UNITYSDK_OFFSET(0x1954DFC0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_READINTPTR_OFFSET UNITYSDK_OFFSET(0x1954E000)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_RELEASEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1954E040)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_RELEASE_OFFSET UNITYSDK_OFFSET(0x1954E050)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_SECURESTRINGTOBSTR_OFFSET UNITYSDK_OFFSET(0x1954E150)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_SECURESTRINGTOCOTASKMEMANSI_OFFSET UNITYSDK_OFFSET(0x1954E270)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_SECURESTRINGTOCOTASKMEMUNICODE_OFFSET UNITYSDK_OFFSET(0x1954E600)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_SECURESTRINGTOGLOBALALLOCANSI_OFFSET UNITYSDK_OFFSET(0x1954E8E0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_SECURESTRINGTOGLOBALALLOCUNICODE_OFFSET UNITYSDK_OFFSET(0x1954E950)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_SIZEOF_1_OFFSET UNITYSDK_OFFSET(0x1954E0F0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_SIZEOF_OFFSET UNITYSDK_OFFSET(0x1954E0C0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_STRINGTOBSTR_OFFSET UNITYSDK_OFFSET(0x1954E100)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_STRINGTOHGLOBALANSI_OFFSET UNITYSDK_OFFSET(0x1954E140)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_STRUCTURETOPTR_OFFSET UNITYSDK_OFFSET(0x1954E9C0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_UNSAFEADDROFPINNEDARRAYELEMENT_OFFSET UNITYSDK_OFFSET(0x1954E9D0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x1954DA80)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_WRITEINT16_1_OFFSET UNITYSDK_OFFSET(0x1954DBB0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_WRITEINT16_OFFSET UNITYSDK_OFFSET(0x1954E9F0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_WRITEINT32_OFFSET UNITYSDK_OFFSET(0x1954EA20)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_ZEROFREEBSTR_OFFSET UNITYSDK_OFFSET(0x1954DA90)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_ZEROFREEGLOBALALLOCUNICODE_OFFSET UNITYSDK_OFFSET(0x1954DC30)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1954EC40)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int Marshal_TypeDefinitionIndex = 1438;

	class Marshal : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_SystemMaxDBCSCharSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Marshal_TypeDefinitionIndex)->GetStaticField(0x2A0);
		}
		static ::System::Int32* StaticGet_SystemDefaultCharSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Marshal_TypeDefinitionIndex)->GetStaticField(0x2A4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL__CCTOR_OFFSET))();
		}

		static ::System::IntPtr AllocCoTaskMem(::System::Int32 cb)
		{
			return ((::System::IntPtr(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_ALLOCCOTASKMEM_OFFSET))(cb);
		}

		static ::System::IntPtr AllocHGlobal(::System::IntPtr cb)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_ALLOCHGLOBAL_OFFSET))(cb);
		}

		static ::System::IntPtr AllocHGlobal_1(::System::Int32 cb)
		{
			return ((::System::IntPtr(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_ALLOCHGLOBAL_1_OFFSET))(cb);
		}

		static ::System::Void copy_to_unmanaged(::System::Array* source, ::System::Int32 startIndex, ::System::IntPtr destination, ::System::Int32 length)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Int32, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_COPY_TO_UNMANAGED_OFFSET))(source, startIndex, destination, length);
		}

		static ::System::Void copy_from_unmanaged(::System::IntPtr source, ::System::Int32 startIndex, ::System::Array* destination, ::System::Int32 length)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_COPY_FROM_UNMANAGED_OFFSET))(source, startIndex, destination, length);
		}

		static ::System::Void Copy(::Il2CppArray<::System::Byte>* source, ::System::Int32 startIndex, ::System::IntPtr destination, ::System::Int32 length)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_COPY_OFFSET))(source, startIndex, destination, length);
		}

		static ::System::Void Copy_1(::Il2CppArray<::System::Char>* source, ::System::Int32 startIndex, ::System::IntPtr destination, ::System::Int32 length)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Char>*, ::System::Int32, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_COPY_1_OFFSET))(source, startIndex, destination, length);
		}

		static ::System::Void Copy_2(::System::IntPtr source, ::Il2CppArray<::System::Byte>* destination, ::System::Int32 startIndex, ::System::Int32 length)
		{
			return ((::System::Void(*)(::System::IntPtr, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_COPY_2_OFFSET))(source, destination, startIndex, length);
		}

		static ::System::Void Copy_3(::System::IntPtr source, ::Il2CppArray<::System::Char>* destination, ::System::Int32 startIndex, ::System::Int32 length)
		{
			return ((::System::Void(*)(::System::IntPtr, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_COPY_3_OFFSET))(source, destination, startIndex, length);
		}

		static ::System::Void Copy_4(::System::IntPtr source, ::Il2CppArray<::System::Single>* destination, ::System::Int32 startIndex, ::System::Int32 length)
		{
			return ((::System::Void(*)(::System::IntPtr, ::Il2CppArray<::System::Single>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_COPY_4_OFFSET))(source, destination, startIndex, length);
		}

		static ::System::Void FreeBSTR(::System::IntPtr ptr)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_FREEBSTR_OFFSET))(ptr);
		}

		static ::System::Void FreeCoTaskMem(::System::IntPtr ptr)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_FREECOTASKMEM_OFFSET))(ptr);
		}

		static ::System::Void FreeHGlobal(::System::IntPtr hglobal)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_FREEHGLOBAL_OFFSET))(hglobal);
		}

		static ::System::Void ClearBSTR(::System::IntPtr ptr)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_CLEARBSTR_OFFSET))(ptr);
		}

		static ::System::Void ZeroFreeBSTR(::System::IntPtr s)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_ZEROFREEBSTR_OFFSET))(s);
		}

		static ::System::Void ClearUnicode(::System::IntPtr ptr)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_CLEARUNICODE_OFFSET))(ptr);
		}

		static ::System::Void ZeroFreeGlobalAllocUnicode(::System::IntPtr s)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_ZEROFREEGLOBALALLOCUNICODE_OFFSET))(s);
		}

		static ::System::Int32 GetLastWin32Error()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_GETLASTWIN32ERROR_OFFSET))();
		}

		static ::System::IntPtr OffsetOf(::System::Type* t, ::System::String* fieldName)
		{
			return ((::System::IntPtr(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_OFFSETOF_OFFSET))(t, fieldName);
		}

		static ::System::String* PtrToStringAnsi(::System::IntPtr ptr)
		{
			return ((::System::String*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_PTRTOSTRINGANSI_OFFSET))(ptr);
		}

		static ::System::String* PtrToStringUni(::System::IntPtr ptr)
		{
			return ((::System::String*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_PTRTOSTRINGUNI_OFFSET))(ptr);
		}

		static ::System::String* PtrToStringUni_1(::System::IntPtr ptr, ::System::Int32 len)
		{
			return ((::System::String*(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_PTRTOSTRINGUNI_1_OFFSET))(ptr, len);
		}

		static ::System::String* PtrToStringBSTR(::System::IntPtr ptr)
		{
			return ((::System::String*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_PTRTOSTRINGBSTR_OFFSET))(ptr);
		}

		static ::System::Void PtrToStructure(::System::IntPtr ptr, ::System::Object* structure)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_PTRTOSTRUCTURE_OFFSET))(ptr, structure);
		}

		static ::System::Object* PtrToStructure_1(::System::IntPtr ptr, ::System::Type* structureType)
		{
			return ((::System::Object*(*)(::System::IntPtr, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_PTRTOSTRUCTURE_1_OFFSET))(ptr, structureType);
		}

		static ::System::Byte ReadByte(::System::IntPtr ptr)
		{
			return ((::System::Byte(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_READBYTE_OFFSET))(ptr);
		}

		static ::System::Byte ReadByte_1(::System::IntPtr ptr, ::System::Int32 ofs)
		{
			return ((::System::Byte(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_READBYTE_1_OFFSET))(ptr, ofs);
		}

		static ::System::Int16 ReadInt16(::System::IntPtr ptr, ::System::Int32 ofs)
		{
			return ((::System::Int16(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_READINT16_OFFSET))(ptr, ofs);
		}

		static ::System::Int32 ReadInt32(::System::IntPtr ptr)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_READINT32_OFFSET))(ptr);
		}

		static ::System::Int32 ReadInt32_1(::System::IntPtr ptr, ::System::Int32 ofs)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_READINT32_1_OFFSET))(ptr, ofs);
		}

		static ::System::Int64 ReadInt64(::System::IntPtr ptr)
		{
			return ((::System::Int64(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_READINT64_OFFSET))(ptr);
		}

		static ::System::IntPtr ReadIntPtr(::System::IntPtr ptr)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_READINTPTR_OFFSET))(ptr);
		}

		static ::System::Int32 ReleaseInternal(::System::IntPtr pUnk)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_RELEASEINTERNAL_OFFSET))(pUnk);
		}

		static ::System::Int32 Release(::System::IntPtr pUnk)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_RELEASE_OFFSET))(pUnk);
		}

		static ::System::Int32 SizeOf(::System::Object* structure)
		{
			return ((::System::Int32(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_SIZEOF_OFFSET))(structure);
		}

		static ::System::Int32 SizeOf_1(::System::Type* t)
		{
			return ((::System::Int32(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_SIZEOF_1_OFFSET))(t);
		}

		static ::System::IntPtr StringToBSTR(::System::String* s)
		{
			return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_STRINGTOBSTR_OFFSET))(s);
		}

		static ::System::IntPtr StringToHGlobalAnsi(::System::String* s)
		{
			return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_STRINGTOHGLOBALANSI_OFFSET))(s);
		}

		static ::System::IntPtr SecureStringToBSTR(::System::Security::SecureString* s)
		{
			return ((::System::IntPtr(*)(::System::Security::SecureString*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_SECURESTRINGTOBSTR_OFFSET))(s);
		}

		static ::System::IntPtr SecureStringToCoTaskMemAnsi(::System::Security::SecureString* s)
		{
			return ((::System::IntPtr(*)(::System::Security::SecureString*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_SECURESTRINGTOCOTASKMEMANSI_OFFSET))(s);
		}

		static ::System::IntPtr SecureStringToCoTaskMemUnicode(::System::Security::SecureString* s)
		{
			return ((::System::IntPtr(*)(::System::Security::SecureString*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_SECURESTRINGTOCOTASKMEMUNICODE_OFFSET))(s);
		}

		static ::System::IntPtr SecureStringToGlobalAllocAnsi(::System::Security::SecureString* s)
		{
			return ((::System::IntPtr(*)(::System::Security::SecureString*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_SECURESTRINGTOGLOBALALLOCANSI_OFFSET))(s);
		}

		static ::System::IntPtr SecureStringToGlobalAllocUnicode(::System::Security::SecureString* s)
		{
			return ((::System::IntPtr(*)(::System::Security::SecureString*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_SECURESTRINGTOGLOBALALLOCUNICODE_OFFSET))(s);
		}

		static ::System::Void StructureToPtr(::System::Object* structure, ::System::IntPtr ptr, ::System::Boolean fDeleteOld)
		{
			return ((::System::Void(*)(::System::Object*, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_STRUCTURETOPTR_OFFSET))(structure, ptr, fDeleteOld);
		}

		static ::System::IntPtr BufferToBSTR(::System::Array* ptr, ::System::Int32 slen)
		{
			return ((::System::IntPtr(*)(::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_BUFFERTOBSTR_OFFSET))(ptr, slen);
		}

		static ::System::IntPtr UnsafeAddrOfPinnedArrayElement(::System::Array* arr, ::System::Int32 index)
		{
			return ((::System::IntPtr(*)(::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_UNSAFEADDROFPINNEDARRAYELEMENT_OFFSET))(arr, index);
		}

		static ::System::Void WriteByte(::System::IntPtr ptr, ::System::Int32 ofs, ::System::Byte val)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_WRITEBYTE_OFFSET))(ptr, ofs, val);
		}

		static ::System::Void WriteInt16(::System::IntPtr ptr, ::System::Int16 val)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_WRITEINT16_OFFSET))(ptr, val);
		}

		static ::System::Void WriteInt16_1(::System::IntPtr ptr, ::System::Int32 ofs, ::System::Int16 val)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_WRITEINT16_1_OFFSET))(ptr, ofs, val);
		}

		static ::System::Void WriteInt32(::System::IntPtr ptr, ::System::Int32 val)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_WRITEINT32_OFFSET))(ptr, val);
		}

		static ::System::Delegate* GetDelegateForFunctionPointerInternal(::System::IntPtr ptr, ::System::Type* t)
		{
			return ((::System::Delegate*(*)(::System::IntPtr, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_GETDELEGATEFORFUNCTIONPOINTERINTERNAL_OFFSET))(ptr, t);
		}

		static ::System::Delegate* GetDelegateForFunctionPointer(::System::IntPtr ptr, ::System::Type* t)
		{
			return ((::System::Delegate*(*)(::System::IntPtr, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_GETDELEGATEFORFUNCTIONPOINTER_OFFSET))(ptr, t);
		}

		static ::System::IntPtr GetFunctionPointerForDelegateInternal(::System::Delegate* d)
		{
			return ((::System::IntPtr(*)(::System::Delegate*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_GETFUNCTIONPOINTERFORDELEGATEINTERNAL_OFFSET))(d);
		}
	};
}
