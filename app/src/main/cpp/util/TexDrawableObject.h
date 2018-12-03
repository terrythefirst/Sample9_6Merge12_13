#ifndef VULKANEXBASE_DASHBOARD2DOBJECT_H
#define VULKANEXBASE_DASHBOARD2DOBJECT_H
#include <vulkan/vulkan.h>
#include <string>
#include "TextureManager.h"
class TexDrawableObject
{
public:
	VkDevice* devicePointer;
	float* vdata;
	int vCount;
	float* pushConstantData;
	VkBuffer vertexDatabuf;
	VkDeviceMemory vertexDataMem;
	VkDescriptorBufferInfo vertexDataBufferInfo;
	TexDrawableObject(float* vdataIn, int dataByteCount, int vCountIn, VkDevice& device, VkPhysicalDeviceMemoryProperties& memoryroperties);
	~TexDrawableObject();
	void drawSelf(VkCommandBuffer& cmd, VkPipelineLayout& pipelineLayout, VkPipeline& pipeline, VkDescriptorSet* desSetPointer);
};
#endif
