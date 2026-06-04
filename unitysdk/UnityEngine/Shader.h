#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Rendering/ShaderKeyword.h"
#include "unitysdk/UnityEngine/Rendering/ShaderPropertyType.h"
#include "unitysdk/UnityEngine/Rendering/ShaderTagId.h"
#include "unitysdk/UnityEngine/Rendering/TextureDimension.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_SHADER_CACHESHADERHOTRELOADCOMMAND_OFFSET UNITYSDK_OFFSET(0x1B2D5FE0)
#define UNITYENGINE_SHADER_CHECKPROPERTYINDEX_OFFSET UNITYSDK_OFFSET(0x1B2D6310)
#define UNITYENGINE_SHADER_DISABLEKEYWORD_1_OFFSET UNITYSDK_OFFSET(0x1B2D5D90)
#define UNITYENGINE_SHADER_DISABLEKEYWORD_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2D5DB0)
#define UNITYENGINE_SHADER_DISABLEKEYWORD_OFFSET UNITYSDK_OFFSET(0x1B2D5D40)
#define UNITYENGINE_SHADER_ENABLEKEYWORD_1_OFFSET UNITYSDK_OFFSET(0x1B2D5D60)
#define UNITYENGINE_SHADER_ENABLEKEYWORD_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2D5D80)
#define UNITYENGINE_SHADER_ENABLEKEYWORD_OFFSET UNITYSDK_OFFSET(0x1B2D5D30)
#define UNITYENGINE_SHADER_FINDPASSTAGVALUE_OFFSET UNITYSDK_OFFSET(0x1B2D5E30)
#define UNITYENGINE_SHADER_FIND_OFFSET UNITYSDK_OFFSET(0x1B2D5D00)
#define UNITYENGINE_SHADER_GETGLOBALFLOATIMPL_OFFSET UNITYSDK_OFFSET(0x1B2D5F80)
#define UNITYENGINE_SHADER_GETGLOBALFLOAT_OFFSET UNITYSDK_OFFSET(0x1B2D6220)
#define UNITYENGINE_SHADER_GETGLOBALVECTORIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2D5FC0)
#define UNITYENGINE_SHADER_GETGLOBALVECTORIMPL_OFFSET UNITYSDK_OFFSET(0x1B2D5F90)
#define UNITYENGINE_SHADER_GETGLOBALVECTOR_OFFSET UNITYSDK_OFFSET(0x1B2D6230)
#define UNITYENGINE_SHADER_GETPASSTAGID_OFFSET UNITYSDK_OFFSET(0x1B2D5CE0)
#define UNITYENGINE_SHADER_GETPROPERTYCOUNT_OFFSET UNITYSDK_OFFSET(0x1B2D6390)
#define UNITYENGINE_SHADER_GETPROPERTYDEFAULTVALUE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2D62F0)
#define UNITYENGINE_SHADER_GETPROPERTYDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1B2D62B0)
#define UNITYENGINE_SHADER_GETPROPERTYNAMEID_1_OFFSET UNITYSDK_OFFSET(0x1B2D6430)
#define UNITYENGINE_SHADER_GETPROPERTYNAMEID_OFFSET UNITYSDK_OFFSET(0x1B2D6290)
#define UNITYENGINE_SHADER_GETPROPERTYNAME_1_OFFSET UNITYSDK_OFFSET(0x1B2D63A0)
#define UNITYENGINE_SHADER_GETPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1B2D6280)
#define UNITYENGINE_SHADER_GETPROPERTYRANGELIMITS_OFFSET UNITYSDK_OFFSET(0x1B2D6550)
#define UNITYENGINE_SHADER_GETPROPERTYTEXTUREDIMENSION_1_OFFSET UNITYSDK_OFFSET(0x1B2D6710)
#define UNITYENGINE_SHADER_GETPROPERTYTEXTUREDIMENSION_OFFSET UNITYSDK_OFFSET(0x1B2D6300)
#define UNITYENGINE_SHADER_GETPROPERTYTYPE_1_OFFSET UNITYSDK_OFFSET(0x1B2D64C0)
#define UNITYENGINE_SHADER_GETPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1B2D62A0)
#define UNITYENGINE_SHADER_GETSHADERPASSTAGID_OFFSET UNITYSDK_OFFSET(0x1B2D5CF0)
#define UNITYENGINE_SHADER_GETSHADERSIZEINFOIMPL_OFFSET UNITYSDK_OFFSET(0x1B2D5F00)
#define UNITYENGINE_SHADER_GETSHADERSIZEINFO_1_OFFSET UNITYSDK_OFFSET(0x1B2D5EE0)
#define UNITYENGINE_SHADER_GETSHADERSIZEINFO_OFFSET UNITYSDK_OFFSET(0x1B2D5ED0)
#define UNITYENGINE_SHADER_GET_ISSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1B2D5D10)
#define UNITYENGINE_SHADER_GET_PASSCOUNT_OFFSET UNITYSDK_OFFSET(0x1B2D5E20)
#define UNITYENGINE_SHADER_IDTOTAG_OFFSET UNITYSDK_OFFSET(0x1B2D1380)
#define UNITYENGINE_SHADER_INTERNAL_FINDPASSTAGVALUE_OFFSET UNITYSDK_OFFSET(0x1B2D5EC0)
#define UNITYENGINE_SHADER_ISKEYWORDENABLED_1_OFFSET UNITYSDK_OFFSET(0x1B2D5DC0)
#define UNITYENGINE_SHADER_ISKEYWORDENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2D5DE0)
#define UNITYENGINE_SHADER_ISKEYWORDENABLED_OFFSET UNITYSDK_OFFSET(0x1B2D5D50)
#define UNITYENGINE_SHADER_LOADBUILTBYTES_OFFSET UNITYSDK_OFFSET(0x1B2D5FD0)
#define UNITYENGINE_SHADER_NAMETOKEYWORD_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2D5E10)
#define UNITYENGINE_SHADER_NAMETOKEYWORD_OFFSET UNITYSDK_OFFSET(0x1B2D5DF0)
#define UNITYENGINE_SHADER_PROPERTYTOID_OFFSET UNITYSDK_OFFSET(0x1B2CAC30)
#define UNITYENGINE_SHADER_SETGLOBALBUFFERIMPL_OFFSET UNITYSDK_OFFSET(0x1B2D5F70)
#define UNITYENGINE_SHADER_SETGLOBALBUFFER_1_OFFSET UNITYSDK_OFFSET(0x1B2D6210)
#define UNITYENGINE_SHADER_SETGLOBALBUFFER_OFFSET UNITYSDK_OFFSET(0x1B2D61E0)
#define UNITYENGINE_SHADER_SETGLOBALCOLOR_1_OFFSET UNITYSDK_OFFSET(0x1B2D60F0)
#define UNITYENGINE_SHADER_SETGLOBALCOLOR_OFFSET UNITYSDK_OFFSET(0x1B2D60C0)
#define UNITYENGINE_SHADER_SETGLOBALFLOATIMPL_OFFSET UNITYSDK_OFFSET(0x1B2D5F10)
#define UNITYENGINE_SHADER_SETGLOBALFLOAT_1_OFFSET UNITYSDK_OFFSET(0x1B2D6020)
#define UNITYENGINE_SHADER_SETGLOBALFLOAT_OFFSET UNITYSDK_OFFSET(0x1B2D5FF0)
#define UNITYENGINE_SHADER_SETGLOBALINT_1_OFFSET UNITYSDK_OFFSET(0x1B2D6060)
#define UNITYENGINE_SHADER_SETGLOBALINT_OFFSET UNITYSDK_OFFSET(0x1B2D6030)
#define UNITYENGINE_SHADER_SETGLOBALMATRIXIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2D5F50)
#define UNITYENGINE_SHADER_SETGLOBALMATRIXIMPL_OFFSET UNITYSDK_OFFSET(0x1B2D5F40)
#define UNITYENGINE_SHADER_SETGLOBALMATRIX_1_OFFSET UNITYSDK_OFFSET(0x1B2D6160)
#define UNITYENGINE_SHADER_SETGLOBALMATRIX_OFFSET UNITYSDK_OFFSET(0x1B2D6110)
#define UNITYENGINE_SHADER_SETGLOBALTEXTUREIMPL_OFFSET UNITYSDK_OFFSET(0x1B2D5F60)
#define UNITYENGINE_SHADER_SETGLOBALTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1B2D61D0)
#define UNITYENGINE_SHADER_SETGLOBALTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B2D61A0)
#define UNITYENGINE_SHADER_SETGLOBALVECTORIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2D5F30)
#define UNITYENGINE_SHADER_SETGLOBALVECTORIMPL_OFFSET UNITYSDK_OFFSET(0x1B2D5F20)
#define UNITYENGINE_SHADER_SETGLOBALVECTOR_1_OFFSET UNITYSDK_OFFSET(0x1B2D60A0)
#define UNITYENGINE_SHADER_SETGLOBALVECTOR_OFFSET UNITYSDK_OFFSET(0x1B2D6070)
#define UNITYENGINE_SHADER_SET_GLOBALRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0x1B2D5D20)
#define UNITYENGINE_SHADER_TAGTOID_OFFSET UNITYSDK_OFFSET(0x1B2D1360)
#define UNITYENGINE_SHADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2D6270)

namespace UnityEngine
{
	inline static constexpr unsigned int Shader_TypeDefinitionIndex = 4123;

	class Shader : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER__CTOR_OFFSET))(this);
		}

		::System::Int32 GetPassTagID(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPASSTAGID_OFFSET))(this, a1);
		}

		static ::System::Int32 GetShaderPassTagID(::UnityEngine::Shader* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::UnityEngine::Shader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETSHADERPASSTAGID_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Shader* Find(::System::String* a1)
		{
			return ((::UnityEngine::Shader*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_FIND_OFFSET))(a1);
		}

		::System::Boolean get_isSupported()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GET_ISSUPPORTED_OFFSET))(this);
		}

		static ::System::Void set_globalRenderPipeline(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SET_GLOBALRENDERPIPELINE_OFFSET))(a1);
		}

		static ::System::Void EnableKeyword(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_ENABLEKEYWORD_OFFSET))(a1);
		}

		static ::System::Void DisableKeyword(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_DISABLEKEYWORD_OFFSET))(a1);
		}

		static ::System::Boolean IsKeywordEnabled(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_ISKEYWORDENABLED_OFFSET))(a1);
		}

		static ::System::Void EnableKeyword_1(::UnityEngine::Rendering::ShaderKeyword a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ShaderKeyword))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_ENABLEKEYWORD_1_OFFSET))(a1);
		}

		static ::System::Void DisableKeyword_1(::UnityEngine::Rendering::ShaderKeyword a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ShaderKeyword))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_DISABLEKEYWORD_1_OFFSET))(a1);
		}

		static ::System::Boolean IsKeywordEnabled_1(::UnityEngine::Rendering::ShaderKeyword a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::ShaderKeyword))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_ISKEYWORDENABLED_1_OFFSET))(a1);
		}

		static ::UnityEngine::Rendering::ShaderKeyword NameToKeyword(::System::String* a1)
		{
			return ((::UnityEngine::Rendering::ShaderKeyword(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_NAMETOKEYWORD_OFFSET))(a1);
		}

		static ::System::Int32 TagToID(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_TAGTOID_OFFSET))(a1);
		}

		static ::System::String* IDToTag(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_IDTOTAG_OFFSET))(a1);
		}

		static ::System::Int32 PropertyToID(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_PROPERTYTOID_OFFSET))(a1);
		}

		::System::Int32 get_passCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GET_PASSCOUNT_OFFSET))(this);
		}

		::UnityEngine::Rendering::ShaderTagId FindPassTagValue(::System::Int32 a1, ::UnityEngine::Rendering::ShaderTagId a2)
		{
			return ((::UnityEngine::Rendering::ShaderTagId(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::ShaderTagId))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_FINDPASSTAGVALUE_OFFSET))(this, a1, a2);
		}

		::System::Int32 Internal_FindPassTagValue(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_INTERNAL_FINDPASSTAGVALUE_OFFSET))(this, a1, a2);
		}

		static ::System::String* GetShaderSizeInfo()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETSHADERSIZEINFO_OFFSET))();
		}

		static ::System::Void GetShaderSizeInfo_1(::Unity::Collections::NativeArray_1<::System::Byte> a1)
		{
			return ((::System::Void(*)(::Unity::Collections::NativeArray_1<::System::Byte>))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETSHADERSIZEINFO_1_OFFSET))(a1);
		}

		static ::System::Void GetShaderSizeInfoImpl(::System::Void* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETSHADERSIZEINFOIMPL_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalFloatImpl(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALFLOATIMPL_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalVectorImpl(::System::Int32 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALVECTORIMPL_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalMatrixImpl(::System::Int32 a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALMATRIXIMPL_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalTextureImpl(::System::Int32 a1, ::UnityEngine::Texture* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALTEXTUREIMPL_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalBufferImpl(::System::Int32 a1, ::UnityEngine::ComputeBuffer* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALBUFFERIMPL_OFFSET))(a1, a2);
		}

		static ::System::Single GetGlobalFloatImpl(::System::Int32 a1)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALFLOATIMPL_OFFSET))(a1);
		}

		static ::UnityEngine::Vector4 GetGlobalVectorImpl(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector4(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALVECTORIMPL_OFFSET))(a1);
		}

		::System::Void LoadBuiltBytes(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_LOADBUILTBYTES_OFFSET))(this, a1);
		}

		static ::System::Void CacheShaderHotReloadCommand(::System::String* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_CACHESHADERHOTRELOADCOMMAND_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalFloat(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALFLOAT_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalFloat_1(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALFLOAT_1_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalInt(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALINT_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalInt_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALINT_1_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalVector(::System::String* a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALVECTOR_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalVector_1(::System::Int32 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALVECTOR_1_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalColor(::System::String* a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALCOLOR_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalColor_1(::System::Int32 a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALCOLOR_1_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalMatrix(::System::String* a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALMATRIX_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalMatrix_1(::System::Int32 a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALMATRIX_1_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalTexture(::System::String* a1, ::UnityEngine::Texture* a2)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALTEXTURE_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalTexture_1(::System::Int32 a1, ::UnityEngine::Texture* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALTEXTURE_1_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalBuffer(::System::String* a1, ::UnityEngine::ComputeBuffer* a2)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALBUFFER_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalBuffer_1(::System::Int32 a1, ::UnityEngine::ComputeBuffer* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALBUFFER_1_OFFSET))(a1, a2);
		}

		static ::System::Single GetGlobalFloat(::System::Int32 a1)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALFLOAT_OFFSET))(a1);
		}

		static ::UnityEngine::Vector4 GetGlobalVector(::System::String* a1)
		{
			return ((::UnityEngine::Vector4(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALVECTOR_OFFSET))(a1);
		}

		static ::System::String* GetPropertyName(::UnityEngine::Shader* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::UnityEngine::Shader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYNAME_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetPropertyNameId(::UnityEngine::Shader* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::UnityEngine::Shader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYNAMEID_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Rendering::ShaderPropertyType GetPropertyType(::UnityEngine::Shader* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Rendering::ShaderPropertyType(*)(::UnityEngine::Shader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYTYPE_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector4 GetPropertyDefaultValue(::UnityEngine::Shader* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Shader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYDEFAULTVALUE_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Rendering::TextureDimension GetPropertyTextureDimension(::UnityEngine::Shader* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Rendering::TextureDimension(*)(::UnityEngine::Shader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYTEXTUREDIMENSION_OFFSET))(a1, a2);
		}

		static ::System::Void CheckPropertyIndex(::UnityEngine::Shader* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::Shader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_CHECKPROPERTYINDEX_OFFSET))(a1, a2);
		}

		::System::Int32 GetPropertyCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYCOUNT_OFFSET))(this);
		}

		::System::String* GetPropertyName_1(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYNAME_1_OFFSET))(this, a1);
		}

		::System::Int32 GetPropertyNameId_1(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYNAMEID_1_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::ShaderPropertyType GetPropertyType_1(::System::Int32 a1)
		{
			return ((::UnityEngine::Rendering::ShaderPropertyType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYTYPE_1_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 GetPropertyRangeLimits(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYRANGELIMITS_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::TextureDimension GetPropertyTextureDimension_1(::System::Int32 a1)
		{
			return ((::UnityEngine::Rendering::TextureDimension(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYTEXTUREDIMENSION_1_OFFSET))(this, a1);
		}

		static ::System::Void EnableKeyword_Injected(::UnityEngine::Rendering::ShaderKeyword& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ShaderKeyword&))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_ENABLEKEYWORD_INJECTED_OFFSET))(a1);
		}

		static ::System::Void DisableKeyword_Injected(::UnityEngine::Rendering::ShaderKeyword& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ShaderKeyword&))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_DISABLEKEYWORD_INJECTED_OFFSET))(a1);
		}

		static ::System::Boolean IsKeywordEnabled_Injected(::UnityEngine::Rendering::ShaderKeyword& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::ShaderKeyword&))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_ISKEYWORDENABLED_INJECTED_OFFSET))(a1);
		}

		static ::System::Void NameToKeyword_Injected(::System::String* a1, ::UnityEngine::Rendering::ShaderKeyword& a2)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Rendering::ShaderKeyword&))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_NAMETOKEYWORD_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalVectorImpl_Injected(::System::Int32 a1, ::UnityEngine::Vector4& a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALVECTORIMPL_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalMatrixImpl_Injected(::System::Int32 a1, ::UnityEngine::Matrix4x4& a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALMATRIXIMPL_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void GetGlobalVectorImpl_Injected(::System::Int32 a1, ::UnityEngine::Vector4& a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALVECTORIMPL_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void GetPropertyDefaultValue_Injected(::UnityEngine::Shader* a1, ::System::Int32 a2, ::UnityEngine::Vector4& a3)
		{
			return ((::System::Void(*)(::UnityEngine::Shader*, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYDEFAULTVALUE_INJECTED_OFFSET))(a1, a2, a3);
		}
	};
}
