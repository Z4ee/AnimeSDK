#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class Delegate; }
namespace System { class Exception; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Security { class SecureString; }

#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_ALLOCCOTASKMEM_OFFSET UNITYSDK_OFFSET(0x16393BE0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_ALLOCHGLOBAL_1_OFFSET UNITYSDK_OFFSET(0x16393C00)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_ALLOCHGLOBAL_OFFSET UNITYSDK_OFFSET(0x16393BF0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_BUFFERTOBSTR_OFFSET UNITYSDK_OFFSET(0x16394460)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_CLEARBSTR_OFFSET UNITYSDK_OFFSET(0x16393E50)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_CLEARUNICODE_OFFSET UNITYSDK_OFFSET(0x16393F40)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_COPY_1_OFFSET UNITYSDK_OFFSET(0x16393CA0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_COPY_2_OFFSET UNITYSDK_OFFSET(0x16393CD0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_COPY_3_OFFSET UNITYSDK_OFFSET(0x16393D00)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_COPY_4_OFFSET UNITYSDK_OFFSET(0x16393D30)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_COPY_5_OFFSET UNITYSDK_OFFSET(0x16393D60)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_COPY_6_OFFSET UNITYSDK_OFFSET(0x16393D90)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_COPY_7_OFFSET UNITYSDK_OFFSET(0x16393DC0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_COPY_8_OFFSET UNITYSDK_OFFSET(0x16393DF0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_COPY_FROM_UNMANAGED_OFFSET UNITYSDK_OFFSET(0x16393C40)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_COPY_OFFSET UNITYSDK_OFFSET(0x16393C70)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_COPY_TO_UNMANAGED_OFFSET UNITYSDK_OFFSET(0x16393C10)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_FREEBSTR_OFFSET UNITYSDK_OFFSET(0x16393E20)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_FREECOTASKMEM_OFFSET UNITYSDK_OFFSET(0x16393E30)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_FREEHGLOBAL_OFFSET UNITYSDK_OFFSET(0x16393E40)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_GETDELEGATEFORFUNCTIONPOINTERINTERNAL_OFFSET UNITYSDK_OFFSET(0x16394870)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_GETDELEGATEFORFUNCTIONPOINTER_OFFSET UNITYSDK_OFFSET(0x163948A0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_GETFUNCTIONPOINTERFORDELEGATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x16394A50)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_GETHRFOREXCEPTION_OFFSET UNITYSDK_OFFSET(0x16393FC0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_GETLASTWIN32ERROR_OFFSET UNITYSDK_OFFSET(0x16393FD0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_PTRTOSTRINGANSI_1_OFFSET UNITYSDK_OFFSET(0x16394050)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_PTRTOSTRINGANSI_OFFSET UNITYSDK_OFFSET(0x16394020)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_PTRTOSTRINGUNI_OFFSET UNITYSDK_OFFSET(0x16394080)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_PTRTOSTRUCTURE_OFFSET UNITYSDK_OFFSET(0x16394120)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_READBYTE_OFFSET UNITYSDK_OFFSET(0x16394130)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_READINT16_OFFSET UNITYSDK_OFFSET(0x16393F80)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_READINT32_1_OFFSET UNITYSDK_OFFSET(0x16393EB0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_READINT32_OFFSET UNITYSDK_OFFSET(0x16394140)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_READINT64_1_OFFSET UNITYSDK_OFFSET(0x16394160)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_READINT64_OFFSET UNITYSDK_OFFSET(0x16394150)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_READINTPTR_1_OFFSET UNITYSDK_OFFSET(0x16394180)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_READINTPTR_OFFSET UNITYSDK_OFFSET(0x16394170)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_RELEASEINTERNAL_OFFSET UNITYSDK_OFFSET(0x16394190)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_RELEASE_OFFSET UNITYSDK_OFFSET(0x163941A0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_SECURESTRINGTOBSTR_OFFSET UNITYSDK_OFFSET(0x163942C0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_SECURESTRINGTOCOTASKMEMUNICODE_OFFSET UNITYSDK_OFFSET(0x16394470)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_SECURESTRINGTOGLOBALALLOCUNICODE_OFFSET UNITYSDK_OFFSET(0x163947B0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_SIZEOFTYPE_OFFSET UNITYSDK_OFFSET(0x16394220)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_SIZEOF_OFFSET UNITYSDK_OFFSET(0x16394210)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_STRINGTOBSTR_OFFSET UNITYSDK_OFFSET(0x16394230)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_STRINGTOHGLOBALUNI_OFFSET UNITYSDK_OFFSET(0x16394270)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_STRUCTURETOPTR_OFFSET UNITYSDK_OFFSET(0x16394820)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_UNSAFEADDROFPINNEDARRAYELEMENT_OFFSET UNITYSDK_OFFSET(0x16394830)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x16393EC0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_WRITEINT16_1_OFFSET UNITYSDK_OFFSET(0x16393F70)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_WRITEINT16_OFFSET UNITYSDK_OFFSET(0x16394850)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_WRITEINT32_OFFSET UNITYSDK_OFFSET(0x16394860)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_ZEROFREEBSTR_OFFSET UNITYSDK_OFFSET(0x16393ED0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_ZEROFREEGLOBALALLOCUNICODE_OFFSET UNITYSDK_OFFSET(0x16393F90)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL__CCTOR_OFFSET UNITYSDK_OFFSET(0x16394A60)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int Marshal_TypeDefinitionIndex = 1426;

	class Marshal : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_SystemDefaultCharSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Marshal_TypeDefinitionIndex)->GetStaticField(0x1FE0);
		}
		static ::System::Int32* StaticGet_SystemMaxDBCSCharSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Marshal_TypeDefinitionIndex)->GetStaticField(0x1FE4);
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

		static ::System::Void Copy_2(::Il2CppArray<::System::Int32>* source, ::System::Int32 startIndex, ::System::IntPtr destination, ::System::Int32 length)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_COPY_2_OFFSET))(source, startIndex, destination, length);
		}

		static ::System::Void Copy_3(::Il2CppArray<::System::Single>* source, ::System::Int32 startIndex, ::System::IntPtr destination, ::System::Int32 length)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Single>*, ::System::Int32, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_COPY_3_OFFSET))(source, startIndex, destination, length);
		}

		static ::System::Void Copy_4(::System::IntPtr source, ::Il2CppArray<::System::Byte>* destination, ::System::Int32 startIndex, ::System::Int32 length)
		{
			return ((::System::Void(*)(::System::IntPtr, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_COPY_4_OFFSET))(source, destination, startIndex, length);
		}

		static ::System::Void Copy_5(::System::IntPtr source, ::Il2CppArray<::System::Char>* destination, ::System::Int32 startIndex, ::System::Int32 length)
		{
			return ((::System::Void(*)(::System::IntPtr, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_COPY_5_OFFSET))(source, destination, startIndex, length);
		}

		static ::System::Void Copy_6(::System::IntPtr source, ::Il2CppArray<::System::Int16>* destination, ::System::Int32 startIndex, ::System::Int32 length)
		{
			return ((::System::Void(*)(::System::IntPtr, ::Il2CppArray<::System::Int16>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_COPY_6_OFFSET))(source, destination, startIndex, length);
		}

		static ::System::Void Copy_7(::System::IntPtr source, ::Il2CppArray<::System::Int32>* destination, ::System::Int32 startIndex, ::System::Int32 length)
		{
			return ((::System::Void(*)(::System::IntPtr, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_COPY_7_OFFSET))(source, destination, startIndex, length);
		}

		static ::System::Void Copy_8(::System::IntPtr source, ::Il2CppArray<::System::Single>* destination, ::System::Int32 startIndex, ::System::Int32 length)
		{
			return ((::System::Void(*)(::System::IntPtr, ::Il2CppArray<::System::Single>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_COPY_8_OFFSET))(source, destination, startIndex, length);
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

		static ::System::Int32 GetHRForException(::System::Exception* e)
		{
			return ((::System::Int32(*)(::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_GETHRFOREXCEPTION_OFFSET))(e);
		}

		static ::System::Int32 GetLastWin32Error()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_GETLASTWIN32ERROR_OFFSET))();
		}

		static ::System::String* PtrToStringAnsi(::System::IntPtr ptr)
		{
			return ((::System::String*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_PTRTOSTRINGANSI_OFFSET))(ptr);
		}

		static ::System::String* PtrToStringAnsi_1(::System::IntPtr ptr, ::System::Int32 len)
		{
			return ((::System::String*(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_PTRTOSTRINGANSI_1_OFFSET))(ptr, len);
		}

		static ::System::String* PtrToStringUni(::System::IntPtr ptr)
		{
			return ((::System::String*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_PTRTOSTRINGUNI_OFFSET))(ptr);
		}

		static ::System::Object* PtrToStructure(::System::IntPtr ptr, ::System::Type* structureType)
		{
			return ((::System::Object*(*)(::System::IntPtr, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_PTRTOSTRUCTURE_OFFSET))(ptr, structureType);
		}

		static ::System::Byte ReadByte(::System::IntPtr ptr, ::System::Int32 ofs)
		{
			return ((::System::Byte(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_READBYTE_OFFSET))(ptr, ofs);
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

		static ::System::Int64 ReadInt64_1(::System::IntPtr ptr, ::System::Int32 ofs)
		{
			return ((::System::Int64(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_READINT64_1_OFFSET))(ptr, ofs);
		}

		static ::System::IntPtr ReadIntPtr(::System::IntPtr ptr)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_READINTPTR_OFFSET))(ptr);
		}

		static ::System::IntPtr ReadIntPtr_1(::System::IntPtr ptr, ::System::Int32 ofs)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_READINTPTR_1_OFFSET))(ptr, ofs);
		}

		static ::System::Int32 ReleaseInternal(::System::IntPtr pUnk)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_RELEASEINTERNAL_OFFSET))(pUnk);
		}

		static ::System::Int32 Release(::System::IntPtr pUnk)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_RELEASE_OFFSET))(pUnk);
		}

		static ::System::Int32 SizeOf(::System::Type* t)
		{
			return ((::System::Int32(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_SIZEOF_OFFSET))(t);
		}

		static ::System::UInt32 SizeOfType(::System::Type* type)
		{
			return ((::System::UInt32(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_SIZEOFTYPE_OFFSET))(type);
		}

		static ::System::IntPtr StringToBSTR(::System::String* s)
		{
			return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_STRINGTOBSTR_OFFSET))(s);
		}

		static ::System::IntPtr StringToHGlobalUni(::System::String* s)
		{
			return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_STRINGTOHGLOBALUNI_OFFSET))(s);
		}

		static ::System::IntPtr SecureStringToBSTR(::System::Security::SecureString* s)
		{
			return ((::System::IntPtr(*)(::System::Security::SecureString*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_SECURESTRINGTOBSTR_OFFSET))(s);
		}

		static ::System::IntPtr SecureStringToCoTaskMemUnicode(::System::Security::SecureString* s)
		{
			return ((::System::IntPtr(*)(::System::Security::SecureString*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHAL_SECURESTRINGTOCOTASKMEMUNICODE_OFFSET))(s);
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
