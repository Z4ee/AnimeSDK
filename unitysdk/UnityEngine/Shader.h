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

#define UNITYENGINE_SHADER_CACHESHADERHOTRELOADCOMMAND_OFFSET UNITYSDK_OFFSET(0x1A4855A0)
#define UNITYENGINE_SHADER_CHECKPROPERTYINDEX_OFFSET UNITYSDK_OFFSET(0x1A4858D0)
#define UNITYENGINE_SHADER_DISABLEKEYWORD_1_OFFSET UNITYSDK_OFFSET(0x1A485350)
#define UNITYENGINE_SHADER_DISABLEKEYWORD_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A485370)
#define UNITYENGINE_SHADER_DISABLEKEYWORD_OFFSET UNITYSDK_OFFSET(0x1A485300)
#define UNITYENGINE_SHADER_ENABLEKEYWORD_1_OFFSET UNITYSDK_OFFSET(0x1A485320)
#define UNITYENGINE_SHADER_ENABLEKEYWORD_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A485340)
#define UNITYENGINE_SHADER_ENABLEKEYWORD_OFFSET UNITYSDK_OFFSET(0x1A4852F0)
#define UNITYENGINE_SHADER_FINDPASSTAGVALUE_OFFSET UNITYSDK_OFFSET(0x1A4853F0)
#define UNITYENGINE_SHADER_FIND_OFFSET UNITYSDK_OFFSET(0x1A4852C0)
#define UNITYENGINE_SHADER_GETGLOBALFLOATIMPL_OFFSET UNITYSDK_OFFSET(0x1A485540)
#define UNITYENGINE_SHADER_GETGLOBALFLOAT_OFFSET UNITYSDK_OFFSET(0x1A4857E0)
#define UNITYENGINE_SHADER_GETGLOBALVECTORIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A485580)
#define UNITYENGINE_SHADER_GETGLOBALVECTORIMPL_OFFSET UNITYSDK_OFFSET(0x1A485550)
#define UNITYENGINE_SHADER_GETGLOBALVECTOR_OFFSET UNITYSDK_OFFSET(0x1A4857F0)
#define UNITYENGINE_SHADER_GETPASSTAGID_OFFSET UNITYSDK_OFFSET(0x1A4852A0)
#define UNITYENGINE_SHADER_GETPROPERTYCOUNT_OFFSET UNITYSDK_OFFSET(0x1A485950)
#define UNITYENGINE_SHADER_GETPROPERTYDEFAULTVALUE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4858B0)
#define UNITYENGINE_SHADER_GETPROPERTYDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1A485870)
#define UNITYENGINE_SHADER_GETPROPERTYNAMEID_1_OFFSET UNITYSDK_OFFSET(0x1A4859F0)
#define UNITYENGINE_SHADER_GETPROPERTYNAMEID_OFFSET UNITYSDK_OFFSET(0x1A485850)
#define UNITYENGINE_SHADER_GETPROPERTYNAME_1_OFFSET UNITYSDK_OFFSET(0x1A485960)
#define UNITYENGINE_SHADER_GETPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1A485840)
#define UNITYENGINE_SHADER_GETPROPERTYRANGELIMITS_OFFSET UNITYSDK_OFFSET(0x1A485B10)
#define UNITYENGINE_SHADER_GETPROPERTYTEXTUREDIMENSION_1_OFFSET UNITYSDK_OFFSET(0x1A485CD0)
#define UNITYENGINE_SHADER_GETPROPERTYTEXTUREDIMENSION_OFFSET UNITYSDK_OFFSET(0x1A4858C0)
#define UNITYENGINE_SHADER_GETPROPERTYTYPE_1_OFFSET UNITYSDK_OFFSET(0x1A485A80)
#define UNITYENGINE_SHADER_GETPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1A485860)
#define UNITYENGINE_SHADER_GETSHADERPASSTAGID_OFFSET UNITYSDK_OFFSET(0x1A4852B0)
#define UNITYENGINE_SHADER_GETSHADERSIZEINFOIMPL_OFFSET UNITYSDK_OFFSET(0x1A4854C0)
#define UNITYENGINE_SHADER_GETSHADERSIZEINFO_1_OFFSET UNITYSDK_OFFSET(0x1A4854A0)
#define UNITYENGINE_SHADER_GETSHADERSIZEINFO_OFFSET UNITYSDK_OFFSET(0x1A485490)
#define UNITYENGINE_SHADER_GET_ISSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1A4852D0)
#define UNITYENGINE_SHADER_GET_PASSCOUNT_OFFSET UNITYSDK_OFFSET(0x1A4853E0)
#define UNITYENGINE_SHADER_IDTOTAG_OFFSET UNITYSDK_OFFSET(0x1A480C30)
#define UNITYENGINE_SHADER_INTERNAL_FINDPASSTAGVALUE_OFFSET UNITYSDK_OFFSET(0x1A485480)
#define UNITYENGINE_SHADER_ISKEYWORDENABLED_1_OFFSET UNITYSDK_OFFSET(0x1A485380)
#define UNITYENGINE_SHADER_ISKEYWORDENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4853A0)
#define UNITYENGINE_SHADER_ISKEYWORDENABLED_OFFSET UNITYSDK_OFFSET(0x1A485310)
#define UNITYENGINE_SHADER_LOADBUILTBYTES_OFFSET UNITYSDK_OFFSET(0x1A485590)
#define UNITYENGINE_SHADER_NAMETOKEYWORD_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4853D0)
#define UNITYENGINE_SHADER_NAMETOKEYWORD_OFFSET UNITYSDK_OFFSET(0x1A4853B0)
#define UNITYENGINE_SHADER_PROPERTYTOID_OFFSET UNITYSDK_OFFSET(0x1A47B650)
#define UNITYENGINE_SHADER_SETGLOBALBUFFERIMPL_OFFSET UNITYSDK_OFFSET(0x1A485530)
#define UNITYENGINE_SHADER_SETGLOBALBUFFER_1_OFFSET UNITYSDK_OFFSET(0x1A4857D0)
#define UNITYENGINE_SHADER_SETGLOBALBUFFER_OFFSET UNITYSDK_OFFSET(0x1A4857A0)
#define UNITYENGINE_SHADER_SETGLOBALCOLOR_1_OFFSET UNITYSDK_OFFSET(0x1A4856B0)
#define UNITYENGINE_SHADER_SETGLOBALCOLOR_OFFSET UNITYSDK_OFFSET(0x1A485680)
#define UNITYENGINE_SHADER_SETGLOBALFLOATIMPL_OFFSET UNITYSDK_OFFSET(0x1A4854D0)
#define UNITYENGINE_SHADER_SETGLOBALFLOAT_1_OFFSET UNITYSDK_OFFSET(0x1A4855E0)
#define UNITYENGINE_SHADER_SETGLOBALFLOAT_OFFSET UNITYSDK_OFFSET(0x1A4855B0)
#define UNITYENGINE_SHADER_SETGLOBALINT_1_OFFSET UNITYSDK_OFFSET(0x1A485620)
#define UNITYENGINE_SHADER_SETGLOBALINT_OFFSET UNITYSDK_OFFSET(0x1A4855F0)
#define UNITYENGINE_SHADER_SETGLOBALMATRIXIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A485510)
#define UNITYENGINE_SHADER_SETGLOBALMATRIXIMPL_OFFSET UNITYSDK_OFFSET(0x1A485500)
#define UNITYENGINE_SHADER_SETGLOBALMATRIX_1_OFFSET UNITYSDK_OFFSET(0x1A485720)
#define UNITYENGINE_SHADER_SETGLOBALMATRIX_OFFSET UNITYSDK_OFFSET(0x1A4856D0)
#define UNITYENGINE_SHADER_SETGLOBALTEXTUREIMPL_OFFSET UNITYSDK_OFFSET(0x1A485520)
#define UNITYENGINE_SHADER_SETGLOBALTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1A485790)
#define UNITYENGINE_SHADER_SETGLOBALTEXTURE_OFFSET UNITYSDK_OFFSET(0x1A485760)
#define UNITYENGINE_SHADER_SETGLOBALVECTORIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4854F0)
#define UNITYENGINE_SHADER_SETGLOBALVECTORIMPL_OFFSET UNITYSDK_OFFSET(0x1A4854E0)
#define UNITYENGINE_SHADER_SETGLOBALVECTOR_1_OFFSET UNITYSDK_OFFSET(0x1A485660)
#define UNITYENGINE_SHADER_SETGLOBALVECTOR_OFFSET UNITYSDK_OFFSET(0x1A485630)
#define UNITYENGINE_SHADER_SET_GLOBALRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0x1A4852E0)
#define UNITYENGINE_SHADER_TAGTOID_OFFSET UNITYSDK_OFFSET(0x1A480C10)
#define UNITYENGINE_SHADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A485830)

namespace UnityEngine
{
	inline static constexpr unsigned int Shader_TypeDefinitionIndex = 3949;

	class Shader : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER__CTOR_OFFSET))(this);
		}

		::System::Int32 GetPassTagID(::System::Int32 passIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPASSTAGID_OFFSET))(this, passIndex);
		}

		static ::System::Int32 GetShaderPassTagID(::UnityEngine::Shader* shader, ::System::Int32 passIndex)
		{
			return ((::System::Int32(*)(::UnityEngine::Shader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETSHADERPASSTAGID_OFFSET))(shader, passIndex);
		}

		static ::UnityEngine::Shader* Find(::System::String* name)
		{
			return ((::UnityEngine::Shader*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_FIND_OFFSET))(name);
		}

		::System::Boolean get_isSupported()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GET_ISSUPPORTED_OFFSET))(this);
		}

		static ::System::Void set_globalRenderPipeline(::System::String* value)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SET_GLOBALRENDERPIPELINE_OFFSET))(value);
		}

		static ::System::Void EnableKeyword(::System::String* keyword)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_ENABLEKEYWORD_OFFSET))(keyword);
		}

		static ::System::Void DisableKeyword(::System::String* keyword)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_DISABLEKEYWORD_OFFSET))(keyword);
		}

		static ::System::Boolean IsKeywordEnabled(::System::String* keyword)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_ISKEYWORDENABLED_OFFSET))(keyword);
		}

		static ::System::Void EnableKeyword_1(::UnityEngine::Rendering::ShaderKeyword keyword)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ShaderKeyword))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_ENABLEKEYWORD_1_OFFSET))(keyword);
		}

		static ::System::Void DisableKeyword_1(::UnityEngine::Rendering::ShaderKeyword keyword)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ShaderKeyword))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_DISABLEKEYWORD_1_OFFSET))(keyword);
		}

		static ::System::Boolean IsKeywordEnabled_1(::UnityEngine::Rendering::ShaderKeyword keyword)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::ShaderKeyword))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_ISKEYWORDENABLED_1_OFFSET))(keyword);
		}

		static ::UnityEngine::Rendering::ShaderKeyword NameToKeyword(::System::String* name)
		{
			return ((::UnityEngine::Rendering::ShaderKeyword(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_NAMETOKEYWORD_OFFSET))(name);
		}

		static ::System::Int32 TagToID(::System::String* name)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_TAGTOID_OFFSET))(name);
		}

		static ::System::String* IDToTag(::System::Int32 name)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_IDTOTAG_OFFSET))(name);
		}

		static ::System::Int32 PropertyToID(::System::String* name)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_PROPERTYTOID_OFFSET))(name);
		}

		::System::Int32 get_passCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GET_PASSCOUNT_OFFSET))(this);
		}

		::UnityEngine::Rendering::ShaderTagId FindPassTagValue(::System::Int32 passIndex, ::UnityEngine::Rendering::ShaderTagId tagName)
		{
			return ((::UnityEngine::Rendering::ShaderTagId(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::ShaderTagId))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_FINDPASSTAGVALUE_OFFSET))(this, passIndex, tagName);
		}

		::System::Int32 Internal_FindPassTagValue(::System::Int32 passIndex, ::System::Int32 tagName)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_INTERNAL_FINDPASSTAGVALUE_OFFSET))(this, passIndex, tagName);
		}

		static ::System::String* GetShaderSizeInfo()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETSHADERSIZEINFO_OFFSET))();
		}

		static ::System::Void GetShaderSizeInfo_1(::Unity::Collections::NativeArray_1<::System::Byte> shaderSizeInfo)
		{
			return ((::System::Void(*)(::Unity::Collections::NativeArray_1<::System::Byte>))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETSHADERSIZEINFO_1_OFFSET))(shaderSizeInfo);
		}

		static ::System::Void GetShaderSizeInfoImpl(::System::Void* ptr, ::System::Int32 length)
		{
			return ((::System::Void(*)(::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETSHADERSIZEINFOIMPL_OFFSET))(ptr, length);
		}

		static ::System::Void SetGlobalFloatImpl(::System::Int32 name, ::System::Single value)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALFLOATIMPL_OFFSET))(name, value);
		}

		static ::System::Void SetGlobalVectorImpl(::System::Int32 name, ::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALVECTORIMPL_OFFSET))(name, value);
		}

		static ::System::Void SetGlobalMatrixImpl(::System::Int32 name, ::UnityEngine::Matrix4x4 value)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALMATRIXIMPL_OFFSET))(name, value);
		}

		static ::System::Void SetGlobalTextureImpl(::System::Int32 name, ::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALTEXTUREIMPL_OFFSET))(name, value);
		}

		static ::System::Void SetGlobalBufferImpl(::System::Int32 name, ::UnityEngine::ComputeBuffer* value)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALBUFFERIMPL_OFFSET))(name, value);
		}

		static ::System::Single GetGlobalFloatImpl(::System::Int32 name)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALFLOATIMPL_OFFSET))(name);
		}

		static ::UnityEngine::Vector4 GetGlobalVectorImpl(::System::Int32 name)
		{
			return ((::UnityEngine::Vector4(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALVECTORIMPL_OFFSET))(name);
		}

		::System::Void LoadBuiltBytes(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_LOADBUILTBYTES_OFFSET))(this, bytes);
		}

		static ::System::Void CacheShaderHotReloadCommand(::System::String* name, ::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_CACHESHADERHOTRELOADCOMMAND_OFFSET))(name, bytes);
		}

		static ::System::Void SetGlobalFloat(::System::String* name, ::System::Single value)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALFLOAT_OFFSET))(name, value);
		}

		static ::System::Void SetGlobalFloat_1(::System::Int32 nameID, ::System::Single value)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALFLOAT_1_OFFSET))(nameID, value);
		}

		static ::System::Void SetGlobalInt(::System::String* name, ::System::Int32 value)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALINT_OFFSET))(name, value);
		}

		static ::System::Void SetGlobalInt_1(::System::Int32 nameID, ::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALINT_1_OFFSET))(nameID, value);
		}

		static ::System::Void SetGlobalVector(::System::String* name, ::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALVECTOR_OFFSET))(name, value);
		}

		static ::System::Void SetGlobalVector_1(::System::Int32 nameID, ::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALVECTOR_1_OFFSET))(nameID, value);
		}

		static ::System::Void SetGlobalColor(::System::String* name, ::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALCOLOR_OFFSET))(name, value);
		}

		static ::System::Void SetGlobalColor_1(::System::Int32 nameID, ::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALCOLOR_1_OFFSET))(nameID, value);
		}

		static ::System::Void SetGlobalMatrix(::System::String* name, ::UnityEngine::Matrix4x4 value)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALMATRIX_OFFSET))(name, value);
		}

		static ::System::Void SetGlobalMatrix_1(::System::Int32 nameID, ::UnityEngine::Matrix4x4 value)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALMATRIX_1_OFFSET))(nameID, value);
		}

		static ::System::Void SetGlobalTexture(::System::String* name, ::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALTEXTURE_OFFSET))(name, value);
		}

		static ::System::Void SetGlobalTexture_1(::System::Int32 nameID, ::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALTEXTURE_1_OFFSET))(nameID, value);
		}

		static ::System::Void SetGlobalBuffer(::System::String* name, ::UnityEngine::ComputeBuffer* value)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALBUFFER_OFFSET))(name, value);
		}

		static ::System::Void SetGlobalBuffer_1(::System::Int32 nameID, ::UnityEngine::ComputeBuffer* value)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALBUFFER_1_OFFSET))(nameID, value);
		}

		static ::System::Single GetGlobalFloat(::System::Int32 nameID)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALFLOAT_OFFSET))(nameID);
		}

		static ::UnityEngine::Vector4 GetGlobalVector(::System::String* name)
		{
			return ((::UnityEngine::Vector4(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALVECTOR_OFFSET))(name);
		}

		static ::System::String* GetPropertyName(::UnityEngine::Shader* shader, ::System::Int32 propertyIndex)
		{
			return ((::System::String*(*)(::UnityEngine::Shader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYNAME_OFFSET))(shader, propertyIndex);
		}

		static ::System::Int32 GetPropertyNameId(::UnityEngine::Shader* shader, ::System::Int32 propertyIndex)
		{
			return ((::System::Int32(*)(::UnityEngine::Shader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYNAMEID_OFFSET))(shader, propertyIndex);
		}

		static ::UnityEngine::Rendering::ShaderPropertyType GetPropertyType(::UnityEngine::Shader* shader, ::System::Int32 propertyIndex)
		{
			return ((::UnityEngine::Rendering::ShaderPropertyType(*)(::UnityEngine::Shader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYTYPE_OFFSET))(shader, propertyIndex);
		}

		static ::UnityEngine::Vector4 GetPropertyDefaultValue(::UnityEngine::Shader* shader, ::System::Int32 propertyIndex)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Shader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYDEFAULTVALUE_OFFSET))(shader, propertyIndex);
		}

		static ::UnityEngine::Rendering::TextureDimension GetPropertyTextureDimension(::UnityEngine::Shader* shader, ::System::Int32 propertyIndex)
		{
			return ((::UnityEngine::Rendering::TextureDimension(*)(::UnityEngine::Shader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYTEXTUREDIMENSION_OFFSET))(shader, propertyIndex);
		}

		static ::System::Void CheckPropertyIndex(::UnityEngine::Shader* s, ::System::Int32 propertyIndex)
		{
			return ((::System::Void(*)(::UnityEngine::Shader*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_CHECKPROPERTYINDEX_OFFSET))(s, propertyIndex);
		}

		::System::Int32 GetPropertyCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYCOUNT_OFFSET))(this);
		}

		::System::String* GetPropertyName_1(::System::Int32 propertyIndex)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYNAME_1_OFFSET))(this, propertyIndex);
		}

		::System::Int32 GetPropertyNameId_1(::System::Int32 propertyIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYNAMEID_1_OFFSET))(this, propertyIndex);
		}

		::UnityEngine::Rendering::ShaderPropertyType GetPropertyType_1(::System::Int32 propertyIndex)
		{
			return ((::UnityEngine::Rendering::ShaderPropertyType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYTYPE_1_OFFSET))(this, propertyIndex);
		}

		::UnityEngine::Vector2 GetPropertyRangeLimits(::System::Int32 propertyIndex)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYRANGELIMITS_OFFSET))(this, propertyIndex);
		}

		::UnityEngine::Rendering::TextureDimension GetPropertyTextureDimension_1(::System::Int32 propertyIndex)
		{
			return ((::UnityEngine::Rendering::TextureDimension(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYTEXTUREDIMENSION_1_OFFSET))(this, propertyIndex);
		}

		static ::System::Void EnableKeyword_Injected(::UnityEngine::Rendering::ShaderKeyword& keyword)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ShaderKeyword&))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_ENABLEKEYWORD_INJECTED_OFFSET))(keyword);
		}

		static ::System::Void DisableKeyword_Injected(::UnityEngine::Rendering::ShaderKeyword& keyword)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ShaderKeyword&))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_DISABLEKEYWORD_INJECTED_OFFSET))(keyword);
		}

		static ::System::Boolean IsKeywordEnabled_Injected(::UnityEngine::Rendering::ShaderKeyword& keyword)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::ShaderKeyword&))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_ISKEYWORDENABLED_INJECTED_OFFSET))(keyword);
		}

		static ::System::Void NameToKeyword_Injected(::System::String* name, ::UnityEngine::Rendering::ShaderKeyword& ret)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Rendering::ShaderKeyword&))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_NAMETOKEYWORD_INJECTED_OFFSET))(name, ret);
		}

		static ::System::Void SetGlobalVectorImpl_Injected(::System::Int32 name, ::UnityEngine::Vector4& value)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALVECTORIMPL_INJECTED_OFFSET))(name, value);
		}

		static ::System::Void SetGlobalMatrixImpl_Injected(::System::Int32 name, ::UnityEngine::Matrix4x4& value)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_SETGLOBALMATRIXIMPL_INJECTED_OFFSET))(name, value);
		}

		static ::System::Void GetGlobalVectorImpl_Injected(::System::Int32 name, ::UnityEngine::Vector4& ret)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETGLOBALVECTORIMPL_INJECTED_OFFSET))(name, ret);
		}

		static ::System::Void GetPropertyDefaultValue_Injected(::UnityEngine::Shader* shader, ::System::Int32 propertyIndex, ::UnityEngine::Vector4& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Shader*, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_SHADER_GETPROPERTYDEFAULTVALUE_INJECTED_OFFSET))(shader, propertyIndex, ret);
		}
	};
}
